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

#include "OAIInviteRead.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIInviteRead::OAIInviteRead(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInviteRead::OAIInviteRead() {
    this->initializeModel();
}

OAIInviteRead::~OAIInviteRead() {}

void OAIInviteRead::initializeModel() {

    m_email_isSet = false;
    m_email_isValid = false;

    m_role_isSet = false;
    m_role_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_organization_id_isSet = false;
    m_organization_id_isValid = false;

    m_invite_code_isSet = false;
    m_invite_code_isValid = false;

    m_created_at_isSet = false;
    m_created_at_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;

    m_failed_reason_isSet = false;
    m_failed_reason_isValid = false;
}

void OAIInviteRead::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInviteRead::fromJsonObject(QJsonObject json) {

    m_email_isValid = ::OpenAPI::fromJsonValue(email, json[QString("email")]);
    m_email_isSet = !json[QString("email")].isNull() && m_email_isValid;

    m_role_isValid = ::OpenAPI::fromJsonValue(role, json[QString("role")]);
    m_role_isSet = !json[QString("role")].isNull() && m_role_isValid;

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_organization_id_isValid = ::OpenAPI::fromJsonValue(organization_id, json[QString("organization_id")]);
    m_organization_id_isSet = !json[QString("organization_id")].isNull() && m_organization_id_isValid;

    m_invite_code_isValid = ::OpenAPI::fromJsonValue(invite_code, json[QString("invite_code")]);
    m_invite_code_isSet = !json[QString("invite_code")].isNull() && m_invite_code_isValid;

    m_created_at_isValid = ::OpenAPI::fromJsonValue(created_at, json[QString("created_at")]);
    m_created_at_isSet = !json[QString("created_at")].isNull() && m_created_at_isValid;

    m_status_isValid = ::OpenAPI::fromJsonValue(status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_failed_reason_isValid = ::OpenAPI::fromJsonValue(failed_reason, json[QString("failed_reason")]);
    m_failed_reason_isSet = !json[QString("failed_reason")].isNull() && m_failed_reason_isValid;
}

QString OAIInviteRead::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInviteRead::asJsonObject() const {
    QJsonObject obj;
    if (m_email_isSet) {
        obj.insert(QString("email"), ::OpenAPI::toJsonValue(email));
    }
    if (m_role_isSet) {
        obj.insert(QString("role"), ::OpenAPI::toJsonValue(role));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_organization_id_isSet) {
        obj.insert(QString("organization_id"), ::OpenAPI::toJsonValue(organization_id));
    }
    if (m_invite_code_isSet) {
        obj.insert(QString("invite_code"), ::OpenAPI::toJsonValue(invite_code));
    }
    if (m_created_at_isSet) {
        obj.insert(QString("created_at"), ::OpenAPI::toJsonValue(created_at));
    }
    if (status.isSet()) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(status));
    }
    if (m_failed_reason_isSet) {
        obj.insert(QString("failed_reason"), ::OpenAPI::toJsonValue(failed_reason));
    }
    return obj;
}

QString OAIInviteRead::getEmail() const {
    return email;
}
void OAIInviteRead::setEmail(const QString &email) {
    this->email = email;
    this->m_email_isSet = true;
}

bool OAIInviteRead::is_email_Set() const{
    return m_email_isSet;
}

bool OAIInviteRead::is_email_Valid() const{
    return m_email_isValid;
}

QString OAIInviteRead::getRole() const {
    return role;
}
void OAIInviteRead::setRole(const QString &role) {
    this->role = role;
    this->m_role_isSet = true;
}

bool OAIInviteRead::is_role_Set() const{
    return m_role_isSet;
}

bool OAIInviteRead::is_role_Valid() const{
    return m_role_isValid;
}

QString OAIInviteRead::getId() const {
    return id;
}
void OAIInviteRead::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIInviteRead::is_id_Set() const{
    return m_id_isSet;
}

bool OAIInviteRead::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIInviteRead::getOrganizationId() const {
    return organization_id;
}
void OAIInviteRead::setOrganizationId(const QString &organization_id) {
    this->organization_id = organization_id;
    this->m_organization_id_isSet = true;
}

bool OAIInviteRead::is_organization_id_Set() const{
    return m_organization_id_isSet;
}

bool OAIInviteRead::is_organization_id_Valid() const{
    return m_organization_id_isValid;
}

QString OAIInviteRead::getInviteCode() const {
    return invite_code;
}
void OAIInviteRead::setInviteCode(const QString &invite_code) {
    this->invite_code = invite_code;
    this->m_invite_code_isSet = true;
}

bool OAIInviteRead::is_invite_code_Set() const{
    return m_invite_code_isSet;
}

bool OAIInviteRead::is_invite_code_Valid() const{
    return m_invite_code_isValid;
}

QDateTime OAIInviteRead::getCreatedAt() const {
    return created_at;
}
void OAIInviteRead::setCreatedAt(const QDateTime &created_at) {
    this->created_at = created_at;
    this->m_created_at_isSet = true;
}

bool OAIInviteRead::is_created_at_Set() const{
    return m_created_at_isSet;
}

bool OAIInviteRead::is_created_at_Valid() const{
    return m_created_at_isValid;
}

OAIInviteStatus OAIInviteRead::getStatus() const {
    return status;
}
void OAIInviteRead::setStatus(const OAIInviteStatus &status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool OAIInviteRead::is_status_Set() const{
    return m_status_isSet;
}

bool OAIInviteRead::is_status_Valid() const{
    return m_status_isValid;
}

QString OAIInviteRead::getFailedReason() const {
    return failed_reason;
}
void OAIInviteRead::setFailedReason(const QString &failed_reason) {
    this->failed_reason = failed_reason;
    this->m_failed_reason_isSet = true;
}

bool OAIInviteRead::is_failed_reason_Set() const{
    return m_failed_reason_isSet;
}

bool OAIInviteRead::is_failed_reason_Valid() const{
    return m_failed_reason_isValid;
}

bool OAIInviteRead::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_email_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_role_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_organization_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_invite_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_created_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (status.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_failed_reason_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIInviteRead::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_email_isValid && m_role_isValid && m_id_isValid && m_organization_id_isValid && m_invite_code_isValid && m_created_at_isValid && m_status_isValid && true;
}

} // namespace OpenAPI
