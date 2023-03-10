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

#include "OAIInviteAttemptResult.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIInviteAttemptResult::OAIInviteAttemptResult(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInviteAttemptResult::OAIInviteAttemptResult() {
    this->initializeModel();
}

OAIInviteAttemptResult::~OAIInviteAttemptResult() {}

void OAIInviteAttemptResult::initializeModel() {

    m_invite_successful_isSet = false;
    m_invite_successful_isValid = false;

    m_invite_failed_reason_isSet = false;
    m_invite_failed_reason_isValid = false;
}

void OAIInviteAttemptResult::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInviteAttemptResult::fromJsonObject(QJsonObject json) {

    m_invite_successful_isValid = ::OpenAPI::fromJsonValue(invite_successful, json[QString("invite_successful")]);
    m_invite_successful_isSet = !json[QString("invite_successful")].isNull() && m_invite_successful_isValid;

    m_invite_failed_reason_isValid = ::OpenAPI::fromJsonValue(invite_failed_reason, json[QString("invite_failed_reason")]);
    m_invite_failed_reason_isSet = !json[QString("invite_failed_reason")].isNull() && m_invite_failed_reason_isValid;
}

QString OAIInviteAttemptResult::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInviteAttemptResult::asJsonObject() const {
    QJsonObject obj;
    if (m_invite_successful_isSet) {
        obj.insert(QString("invite_successful"), ::OpenAPI::toJsonValue(invite_successful));
    }
    if (m_invite_failed_reason_isSet) {
        obj.insert(QString("invite_failed_reason"), ::OpenAPI::toJsonValue(invite_failed_reason));
    }
    return obj;
}

bool OAIInviteAttemptResult::isInviteSuccessful() const {
    return invite_successful;
}
void OAIInviteAttemptResult::setInviteSuccessful(const bool &invite_successful) {
    this->invite_successful = invite_successful;
    this->m_invite_successful_isSet = true;
}

bool OAIInviteAttemptResult::is_invite_successful_Set() const{
    return m_invite_successful_isSet;
}

bool OAIInviteAttemptResult::is_invite_successful_Valid() const{
    return m_invite_successful_isValid;
}

QString OAIInviteAttemptResult::getInviteFailedReason() const {
    return invite_failed_reason;
}
void OAIInviteAttemptResult::setInviteFailedReason(const QString &invite_failed_reason) {
    this->invite_failed_reason = invite_failed_reason;
    this->m_invite_failed_reason_isSet = true;
}

bool OAIInviteAttemptResult::is_invite_failed_reason_Set() const{
    return m_invite_failed_reason_isSet;
}

bool OAIInviteAttemptResult::is_invite_failed_reason_Valid() const{
    return m_invite_failed_reason_isValid;
}

bool OAIInviteAttemptResult::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_invite_successful_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_invite_failed_reason_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIInviteAttemptResult::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
