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

#include "OAIUserUpdate.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUserUpdate::OAIUserUpdate(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUserUpdate::OAIUserUpdate() {
    this->initializeModel();
}

OAIUserUpdate::~OAIUserUpdate() {}

void OAIUserUpdate::initializeModel() {

    m_email_isSet = false;
    m_email_isValid = false;

    m_first_name_isSet = false;
    m_first_name_isValid = false;

    m_last_name_isSet = false;
    m_last_name_isValid = false;

    m_attributes_isSet = false;
    m_attributes_isValid = false;
}

void OAIUserUpdate::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUserUpdate::fromJsonObject(QJsonObject json) {

    m_email_isValid = ::OpenAPI::fromJsonValue(email, json[QString("email")]);
    m_email_isSet = !json[QString("email")].isNull() && m_email_isValid;

    m_first_name_isValid = ::OpenAPI::fromJsonValue(first_name, json[QString("first_name")]);
    m_first_name_isSet = !json[QString("first_name")].isNull() && m_first_name_isValid;

    m_last_name_isValid = ::OpenAPI::fromJsonValue(last_name, json[QString("last_name")]);
    m_last_name_isSet = !json[QString("last_name")].isNull() && m_last_name_isValid;

    m_attributes_isValid = ::OpenAPI::fromJsonValue(attributes, json[QString("attributes")]);
    m_attributes_isSet = !json[QString("attributes")].isNull() && m_attributes_isValid;
}

QString OAIUserUpdate::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUserUpdate::asJsonObject() const {
    QJsonObject obj;
    if (m_email_isSet) {
        obj.insert(QString("email"), ::OpenAPI::toJsonValue(email));
    }
    if (m_first_name_isSet) {
        obj.insert(QString("first_name"), ::OpenAPI::toJsonValue(first_name));
    }
    if (m_last_name_isSet) {
        obj.insert(QString("last_name"), ::OpenAPI::toJsonValue(last_name));
    }
    if (m_attributes_isSet) {
        obj.insert(QString("attributes"), ::OpenAPI::toJsonValue(attributes));
    }
    return obj;
}

QString OAIUserUpdate::getEmail() const {
    return email;
}
void OAIUserUpdate::setEmail(const QString &email) {
    this->email = email;
    this->m_email_isSet = true;
}

bool OAIUserUpdate::is_email_Set() const{
    return m_email_isSet;
}

bool OAIUserUpdate::is_email_Valid() const{
    return m_email_isValid;
}

QString OAIUserUpdate::getFirstName() const {
    return first_name;
}
void OAIUserUpdate::setFirstName(const QString &first_name) {
    this->first_name = first_name;
    this->m_first_name_isSet = true;
}

bool OAIUserUpdate::is_first_name_Set() const{
    return m_first_name_isSet;
}

bool OAIUserUpdate::is_first_name_Valid() const{
    return m_first_name_isValid;
}

QString OAIUserUpdate::getLastName() const {
    return last_name;
}
void OAIUserUpdate::setLastName(const QString &last_name) {
    this->last_name = last_name;
    this->m_last_name_isSet = true;
}

bool OAIUserUpdate::is_last_name_Set() const{
    return m_last_name_isSet;
}

bool OAIUserUpdate::is_last_name_Valid() const{
    return m_last_name_isValid;
}

OAIObject OAIUserUpdate::getAttributes() const {
    return attributes;
}
void OAIUserUpdate::setAttributes(const OAIObject &attributes) {
    this->attributes = attributes;
    this->m_attributes_isSet = true;
}

bool OAIUserUpdate::is_attributes_Set() const{
    return m_attributes_isSet;
}

bool OAIUserUpdate::is_attributes_Valid() const{
    return m_attributes_isValid;
}

bool OAIUserUpdate::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_email_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_first_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_attributes_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUserUpdate::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
