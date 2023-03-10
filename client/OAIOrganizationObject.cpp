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

#include "OAIOrganizationObject.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOrganizationObject::OAIOrganizationObject(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOrganizationObject::OAIOrganizationObject() {
    this->initializeModel();
}

OAIOrganizationObject::~OAIOrganizationObject() {}

void OAIOrganizationObject::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_key_isSet = false;
    m_key_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_created_at_isSet = false;
    m_created_at_isValid = false;

    m_updated_at_isSet = false;
    m_updated_at_isValid = false;
}

void OAIOrganizationObject::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOrganizationObject::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_key_isValid = ::OpenAPI::fromJsonValue(key, json[QString("key")]);
    m_key_isSet = !json[QString("key")].isNull() && m_key_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_created_at_isValid = ::OpenAPI::fromJsonValue(created_at, json[QString("created_at")]);
    m_created_at_isSet = !json[QString("created_at")].isNull() && m_created_at_isValid;

    m_updated_at_isValid = ::OpenAPI::fromJsonValue(updated_at, json[QString("updated_at")]);
    m_updated_at_isSet = !json[QString("updated_at")].isNull() && m_updated_at_isValid;
}

QString OAIOrganizationObject::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOrganizationObject::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_key_isSet) {
        obj.insert(QString("key"), ::OpenAPI::toJsonValue(key));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (m_created_at_isSet) {
        obj.insert(QString("created_at"), ::OpenAPI::toJsonValue(created_at));
    }
    if (m_updated_at_isSet) {
        obj.insert(QString("updated_at"), ::OpenAPI::toJsonValue(updated_at));
    }
    return obj;
}

QString OAIOrganizationObject::getId() const {
    return id;
}
void OAIOrganizationObject::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIOrganizationObject::is_id_Set() const{
    return m_id_isSet;
}

bool OAIOrganizationObject::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIOrganizationObject::getKey() const {
    return key;
}
void OAIOrganizationObject::setKey(const QString &key) {
    this->key = key;
    this->m_key_isSet = true;
}

bool OAIOrganizationObject::is_key_Set() const{
    return m_key_isSet;
}

bool OAIOrganizationObject::is_key_Valid() const{
    return m_key_isValid;
}

QString OAIOrganizationObject::getName() const {
    return name;
}
void OAIOrganizationObject::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIOrganizationObject::is_name_Set() const{
    return m_name_isSet;
}

bool OAIOrganizationObject::is_name_Valid() const{
    return m_name_isValid;
}

QDateTime OAIOrganizationObject::getCreatedAt() const {
    return created_at;
}
void OAIOrganizationObject::setCreatedAt(const QDateTime &created_at) {
    this->created_at = created_at;
    this->m_created_at_isSet = true;
}

bool OAIOrganizationObject::is_created_at_Set() const{
    return m_created_at_isSet;
}

bool OAIOrganizationObject::is_created_at_Valid() const{
    return m_created_at_isValid;
}

QDateTime OAIOrganizationObject::getUpdatedAt() const {
    return updated_at;
}
void OAIOrganizationObject::setUpdatedAt(const QDateTime &updated_at) {
    this->updated_at = updated_at;
    this->m_updated_at_isSet = true;
}

bool OAIOrganizationObject::is_updated_at_Set() const{
    return m_updated_at_isSet;
}

bool OAIOrganizationObject::is_updated_at_Valid() const{
    return m_updated_at_isValid;
}

bool OAIOrganizationObject::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_key_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_created_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_updated_at_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOrganizationObject::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_key_isValid && m_created_at_isValid && m_updated_at_isValid && true;
}

} // namespace OpenAPI
