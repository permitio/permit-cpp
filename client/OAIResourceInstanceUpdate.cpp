/**
 * Permit.io API
 *  Authorization as a service 
 *
 * The version of the OpenAPI document: 2.0.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIResourceInstanceUpdate.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResourceInstanceUpdate::OAIResourceInstanceUpdate(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIResourceInstanceUpdate::OAIResourceInstanceUpdate() {
    this->initializeModel();
}

OAIResourceInstanceUpdate::~OAIResourceInstanceUpdate() {}

void OAIResourceInstanceUpdate::initializeModel() {

    m_attributes_isSet = false;
    m_attributes_isValid = false;
}

void OAIResourceInstanceUpdate::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIResourceInstanceUpdate::fromJsonObject(QJsonObject json) {

    m_attributes_isValid = ::OpenAPI::fromJsonValue(attributes, json[QString("attributes")]);
    m_attributes_isSet = !json[QString("attributes")].isNull() && m_attributes_isValid;
}

QString OAIResourceInstanceUpdate::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIResourceInstanceUpdate::asJsonObject() const {
    QJsonObject obj;
    if (m_attributes_isSet) {
        obj.insert(QString("attributes"), ::OpenAPI::toJsonValue(attributes));
    }
    return obj;
}

OAIObject OAIResourceInstanceUpdate::getAttributes() const {
    return attributes;
}
void OAIResourceInstanceUpdate::setAttributes(const OAIObject &attributes) {
    this->attributes = attributes;
    this->m_attributes_isSet = true;
}

bool OAIResourceInstanceUpdate::is_attributes_Set() const{
    return m_attributes_isSet;
}

bool OAIResourceInstanceUpdate::is_attributes_Valid() const{
    return m_attributes_isValid;
}

bool OAIResourceInstanceUpdate::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_attributes_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIResourceInstanceUpdate::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI