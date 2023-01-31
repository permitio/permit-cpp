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

/*
 * OAIInviteRead.h
 *
 * 
 */

#ifndef OAIInviteRead_H
#define OAIInviteRead_H

#include <QJsonObject>

#include "OAIInviteStatus.h"
#include <QDateTime>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIInviteRead : public OAIObject {
public:
    OAIInviteRead();
    OAIInviteRead(QString json);
    ~OAIInviteRead() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getEmail() const;
    void setEmail(const QString &email);
    bool is_email_Set() const;
    bool is_email_Valid() const;

    QString getRole() const;
    void setRole(const QString &role);
    bool is_role_Set() const;
    bool is_role_Valid() const;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getOrganizationId() const;
    void setOrganizationId(const QString &organization_id);
    bool is_organization_id_Set() const;
    bool is_organization_id_Valid() const;

    QString getInviteCode() const;
    void setInviteCode(const QString &invite_code);
    bool is_invite_code_Set() const;
    bool is_invite_code_Valid() const;

    QDateTime getCreatedAt() const;
    void setCreatedAt(const QDateTime &created_at);
    bool is_created_at_Set() const;
    bool is_created_at_Valid() const;

    OAIInviteStatus getStatus() const;
    void setStatus(const OAIInviteStatus &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    QString getFailedReason() const;
    void setFailedReason(const QString &failed_reason);
    bool is_failed_reason_Set() const;
    bool is_failed_reason_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString email;
    bool m_email_isSet;
    bool m_email_isValid;

    QString role;
    bool m_role_isSet;
    bool m_role_isValid;

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString organization_id;
    bool m_organization_id_isSet;
    bool m_organization_id_isValid;

    QString invite_code;
    bool m_invite_code_isSet;
    bool m_invite_code_isValid;

    QDateTime created_at;
    bool m_created_at_isSet;
    bool m_created_at_isValid;

    OAIInviteStatus status;
    bool m_status_isSet;
    bool m_status_isValid;

    QString failed_reason;
    bool m_failed_reason_isSet;
    bool m_failed_reason_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIInviteRead)

#endif // OAIInviteRead_H
