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

#include "OAIActionBlockRead.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIActionBlockRead::OAIActionBlockRead(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIActionBlockRead::OAIActionBlockRead() {
    this->initializeModel();
}

OAIActionBlockRead::~OAIActionBlockRead() {}

void OAIActionBlockRead::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_key_isSet = false;
    m_key_isValid = false;
}

void OAIActionBlockRead::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIActionBlockRead::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_description_isValid = ::OpenAPI::fromJsonValue(description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_key_isValid = ::OpenAPI::fromJsonValue(key, json[QString("key")]);
    m_key_isSet = !json[QString("key")].isNull() && m_key_isValid;
}

QString OAIActionBlockRead::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIActionBlockRead::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
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

QString OAIActionBlockRead::getName() const {
    return name;
}
void OAIActionBlockRead::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIActionBlockRead::is_name_Set() const{
    return m_name_isSet;
}

bool OAIActionBlockRead::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIActionBlockRead::getDescription() const {
    return description;
}
void OAIActionBlockRead::setDescription(const QString &description) {
    this->description = description;
    this->m_description_isSet = true;
}

bool OAIActionBlockRead::is_description_Set() const{
    return m_description_isSet;
}

bool OAIActionBlockRead::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIActionBlockRead::getId() const {
    return id;
}
void OAIActionBlockRead::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIActionBlockRead::is_id_Set() const{
    return m_id_isSet;
}

bool OAIActionBlockRead::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIActionBlockRead::getKey() const {
    return key;
}
void OAIActionBlockRead::setKey(const QString &key) {
    this->key = key;
    this->m_key_isSet = true;
}

bool OAIActionBlockRead::is_key_Set() const{
    return m_key_isSet;
}

bool OAIActionBlockRead::is_key_Valid() const{
    return m_key_isValid;
}

bool OAIActionBlockRead::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
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

bool OAIActionBlockRead::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && true;
}

} // namespace OpenAPI
