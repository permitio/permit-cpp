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

#include "OAIResourceActionCreate.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResourceActionCreate::OAIResourceActionCreate(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIResourceActionCreate::OAIResourceActionCreate() {
    this->initializeModel();
}

OAIResourceActionCreate::~OAIResourceActionCreate() {}

void OAIResourceActionCreate::initializeModel() {

    m_key_isSet = false;
    m_key_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;
}

void OAIResourceActionCreate::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIResourceActionCreate::fromJsonObject(QJsonObject json) {

    m_key_isValid = ::OpenAPI::fromJsonValue(key, json[QString("key")]);
    m_key_isSet = !json[QString("key")].isNull() && m_key_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_description_isValid = ::OpenAPI::fromJsonValue(description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;
}

QString OAIResourceActionCreate::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIResourceActionCreate::asJsonObject() const {
    QJsonObject obj;
    if (m_key_isSet) {
        obj.insert(QString("key"), ::OpenAPI::toJsonValue(key));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(description));
    }
    return obj;
}

QString OAIResourceActionCreate::getKey() const {
    return key;
}
void OAIResourceActionCreate::setKey(const QString &key) {
    this->key = key;
    this->m_key_isSet = true;
}

bool OAIResourceActionCreate::is_key_Set() const{
    return m_key_isSet;
}

bool OAIResourceActionCreate::is_key_Valid() const{
    return m_key_isValid;
}

QString OAIResourceActionCreate::getName() const {
    return name;
}
void OAIResourceActionCreate::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIResourceActionCreate::is_name_Set() const{
    return m_name_isSet;
}

bool OAIResourceActionCreate::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIResourceActionCreate::getDescription() const {
    return description;
}
void OAIResourceActionCreate::setDescription(const QString &description) {
    this->description = description;
    this->m_description_isSet = true;
}

bool OAIResourceActionCreate::is_description_Set() const{
    return m_description_isSet;
}

bool OAIResourceActionCreate::is_description_Valid() const{
    return m_description_isValid;
}

bool OAIResourceActionCreate::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_key_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIResourceActionCreate::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_key_isValid && m_name_isValid && true;
}

} // namespace OpenAPI
