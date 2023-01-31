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

#include "OAIPdp_Config_Object.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPdp_Config_Object::OAIPdp_Config_Object(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPdp_Config_Object::OAIPdp_Config_Object() {
    this->initializeModel();
}

OAIPdp_Config_Object::~OAIPdp_Config_Object() {}

void OAIPdp_Config_Object::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;
}

void OAIPdp_Config_Object::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPdp_Config_Object::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;
}

QString OAIPdp_Config_Object::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPdp_Config_Object::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    return obj;
}

QString OAIPdp_Config_Object::getId() const {
    return id;
}
void OAIPdp_Config_Object::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIPdp_Config_Object::is_id_Set() const{
    return m_id_isSet;
}

bool OAIPdp_Config_Object::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIPdp_Config_Object::getName() const {
    return name;
}
void OAIPdp_Config_Object::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIPdp_Config_Object::is_name_Set() const{
    return m_name_isSet;
}

bool OAIPdp_Config_Object::is_name_Valid() const{
    return m_name_isValid;
}

bool OAIPdp_Config_Object::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPdp_Config_Object::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_name_isValid && true;
}

} // namespace OpenAPI