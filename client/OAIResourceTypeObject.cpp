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

#include "OAIResourceTypeObject.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResourceTypeObject::OAIResourceTypeObject(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIResourceTypeObject::OAIResourceTypeObject() {
    this->initializeModel();
}

OAIResourceTypeObject::~OAIResourceTypeObject() {}

void OAIResourceTypeObject::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_key_isSet = false;
    m_key_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_attributes_isSet = false;
    m_attributes_isValid = false;

    m_created_at_isSet = false;
    m_created_at_isValid = false;

    m_updated_at_isSet = false;
    m_updated_at_isValid = false;
}

void OAIResourceTypeObject::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIResourceTypeObject::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_key_isValid = ::OpenAPI::fromJsonValue(key, json[QString("key")]);
    m_key_isSet = !json[QString("key")].isNull() && m_key_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_attributes_isValid = ::OpenAPI::fromJsonValue(attributes, json[QString("attributes")]);
    m_attributes_isSet = !json[QString("attributes")].isNull() && m_attributes_isValid;

    m_created_at_isValid = ::OpenAPI::fromJsonValue(created_at, json[QString("created_at")]);
    m_created_at_isSet = !json[QString("created_at")].isNull() && m_created_at_isValid;

    m_updated_at_isValid = ::OpenAPI::fromJsonValue(updated_at, json[QString("updated_at")]);
    m_updated_at_isSet = !json[QString("updated_at")].isNull() && m_updated_at_isValid;
}

QString OAIResourceTypeObject::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIResourceTypeObject::asJsonObject() const {
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
    if (attributes.size() > 0) {
        obj.insert(QString("attributes"), ::OpenAPI::toJsonValue(attributes));
    }
    if (m_created_at_isSet) {
        obj.insert(QString("created_at"), ::OpenAPI::toJsonValue(created_at));
    }
    if (m_updated_at_isSet) {
        obj.insert(QString("updated_at"), ::OpenAPI::toJsonValue(updated_at));
    }
    return obj;
}

QString OAIResourceTypeObject::getId() const {
    return id;
}
void OAIResourceTypeObject::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIResourceTypeObject::is_id_Set() const{
    return m_id_isSet;
}

bool OAIResourceTypeObject::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIResourceTypeObject::getKey() const {
    return key;
}
void OAIResourceTypeObject::setKey(const QString &key) {
    this->key = key;
    this->m_key_isSet = true;
}

bool OAIResourceTypeObject::is_key_Set() const{
    return m_key_isSet;
}

bool OAIResourceTypeObject::is_key_Valid() const{
    return m_key_isValid;
}

QString OAIResourceTypeObject::getName() const {
    return name;
}
void OAIResourceTypeObject::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIResourceTypeObject::is_name_Set() const{
    return m_name_isSet;
}

bool OAIResourceTypeObject::is_name_Valid() const{
    return m_name_isValid;
}

QList<OAIResourceAttributes> OAIResourceTypeObject::getAttributes() const {
    return attributes;
}
void OAIResourceTypeObject::setAttributes(const QList<OAIResourceAttributes> &attributes) {
    this->attributes = attributes;
    this->m_attributes_isSet = true;
}

bool OAIResourceTypeObject::is_attributes_Set() const{
    return m_attributes_isSet;
}

bool OAIResourceTypeObject::is_attributes_Valid() const{
    return m_attributes_isValid;
}

QDateTime OAIResourceTypeObject::getCreatedAt() const {
    return created_at;
}
void OAIResourceTypeObject::setCreatedAt(const QDateTime &created_at) {
    this->created_at = created_at;
    this->m_created_at_isSet = true;
}

bool OAIResourceTypeObject::is_created_at_Set() const{
    return m_created_at_isSet;
}

bool OAIResourceTypeObject::is_created_at_Valid() const{
    return m_created_at_isValid;
}

QDateTime OAIResourceTypeObject::getUpdatedAt() const {
    return updated_at;
}
void OAIResourceTypeObject::setUpdatedAt(const QDateTime &updated_at) {
    this->updated_at = updated_at;
    this->m_updated_at_isSet = true;
}

bool OAIResourceTypeObject::is_updated_at_Set() const{
    return m_updated_at_isSet;
}

bool OAIResourceTypeObject::is_updated_at_Valid() const{
    return m_updated_at_isValid;
}

bool OAIResourceTypeObject::isSet() const {
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

        if (attributes.size() > 0) {
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

bool OAIResourceTypeObject::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_key_isValid && m_created_at_isValid && m_updated_at_isValid && true;
}

} // namespace OpenAPI