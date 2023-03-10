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

#include "OAIAttributeBlockRead.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAttributeBlockRead::OAIAttributeBlockRead(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAttributeBlockRead::OAIAttributeBlockRead() {
    this->initializeModel();
}

OAIAttributeBlockRead::~OAIAttributeBlockRead() {}

void OAIAttributeBlockRead::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_key_isSet = false;
    m_key_isValid = false;
}

void OAIAttributeBlockRead::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAttributeBlockRead::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::OpenAPI::fromJsonValue(type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_description_isValid = ::OpenAPI::fromJsonValue(description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_key_isValid = ::OpenAPI::fromJsonValue(key, json[QString("key")]);
    m_key_isSet = !json[QString("key")].isNull() && m_key_isValid;
}

QString OAIAttributeBlockRead::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAttributeBlockRead::asJsonObject() const {
    QJsonObject obj;
    if (type.isSet()) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(type));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(description));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_key_isSet) {
        obj.insert(QString("key"), ::OpenAPI::toJsonValue(key));
    }
    return obj;
}

OAIAttributeType OAIAttributeBlockRead::getType() const {
    return type;
}
void OAIAttributeBlockRead::setType(const OAIAttributeType &type) {
    this->type = type;
    this->m_type_isSet = true;
}

bool OAIAttributeBlockRead::is_type_Set() const{
    return m_type_isSet;
}

bool OAIAttributeBlockRead::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIAttributeBlockRead::getDescription() const {
    return description;
}
void OAIAttributeBlockRead::setDescription(const QString &description) {
    this->description = description;
    this->m_description_isSet = true;
}

bool OAIAttributeBlockRead::is_description_Set() const{
    return m_description_isSet;
}

bool OAIAttributeBlockRead::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIAttributeBlockRead::getId() const {
    return id;
}
void OAIAttributeBlockRead::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIAttributeBlockRead::is_id_Set() const{
    return m_id_isSet;
}

bool OAIAttributeBlockRead::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIAttributeBlockRead::getKey() const {
    return key;
}
void OAIAttributeBlockRead::setKey(const QString &key) {
    this->key = key;
    this->m_key_isSet = true;
}

bool OAIAttributeBlockRead::is_key_Set() const{
    return m_key_isSet;
}

bool OAIAttributeBlockRead::is_key_Valid() const{
    return m_key_isValid;
}

bool OAIAttributeBlockRead::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_key_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAttributeBlockRead::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_id_isValid && true;
}

} // namespace OpenAPI
