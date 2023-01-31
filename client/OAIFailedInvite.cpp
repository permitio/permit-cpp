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

#include "OAIFailedInvite.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIFailedInvite::OAIFailedInvite(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIFailedInvite::OAIFailedInvite() {
    this->initializeModel();
}

OAIFailedInvite::~OAIFailedInvite() {}

void OAIFailedInvite::initializeModel() {

    m_email_isSet = false;
    m_email_isValid = false;

    m_reason_isSet = false;
    m_reason_isValid = false;
}

void OAIFailedInvite::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIFailedInvite::fromJsonObject(QJsonObject json) {

    m_email_isValid = ::OpenAPI::fromJsonValue(email, json[QString("email")]);
    m_email_isSet = !json[QString("email")].isNull() && m_email_isValid;

    m_reason_isValid = ::OpenAPI::fromJsonValue(reason, json[QString("reason")]);
    m_reason_isSet = !json[QString("reason")].isNull() && m_reason_isValid;
}

QString OAIFailedInvite::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIFailedInvite::asJsonObject() const {
    QJsonObject obj;
    if (m_email_isSet) {
        obj.insert(QString("email"), ::OpenAPI::toJsonValue(email));
    }
    if (m_reason_isSet) {
        obj.insert(QString("reason"), ::OpenAPI::toJsonValue(reason));
    }
    return obj;
}

QString OAIFailedInvite::getEmail() const {
    return email;
}
void OAIFailedInvite::setEmail(const QString &email) {
    this->email = email;
    this->m_email_isSet = true;
}

bool OAIFailedInvite::is_email_Set() const{
    return m_email_isSet;
}

bool OAIFailedInvite::is_email_Valid() const{
    return m_email_isValid;
}

QString OAIFailedInvite::getReason() const {
    return reason;
}
void OAIFailedInvite::setReason(const QString &reason) {
    this->reason = reason;
    this->m_reason_isSet = true;
}

bool OAIFailedInvite::is_reason_Set() const{
    return m_reason_isSet;
}

bool OAIFailedInvite::is_reason_Valid() const{
    return m_reason_isValid;
}

bool OAIFailedInvite::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_email_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_reason_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIFailedInvite::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_email_isValid && m_reason_isValid && true;
}

} // namespace OpenAPI
