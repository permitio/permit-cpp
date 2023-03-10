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
 * OAIOrgMemberRead.h
 *
 * 
 */

#ifndef OAIOrgMemberRead_H
#define OAIOrgMemberRead_H

#include <QJsonObject>

#include "OAIIdentityRead.h"
#include "OAIObject.h"
#include "OAIOnboardingStep.h"
#include <QDateTime>
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIIdentityRead;

class OAIOrgMemberRead : public OAIObject {
public:
    OAIOrgMemberRead();
    OAIOrgMemberRead(QString json);
    ~OAIOrgMemberRead() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getEmail() const;
    void setEmail(const QString &email);
    bool is_email_Set() const;
    bool is_email_Valid() const;

    bool isEmailVerified() const;
    void setEmailVerified(const bool &email_verified);
    bool is_email_verified_Set() const;
    bool is_email_verified_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getGivenName() const;
    void setGivenName(const QString &given_name);
    bool is_given_name_Set() const;
    bool is_given_name_Valid() const;

    QString getFamilyName() const;
    void setFamilyName(const QString &family_name);
    bool is_family_name_Set() const;
    bool is_family_name_Valid() const;

    QString getPicture() const;
    void setPicture(const QString &picture);
    bool is_picture_Set() const;
    bool is_picture_Valid() const;

    bool isIsSuperuser() const;
    void setIsSuperuser(const bool &is_superuser);
    bool is_is_superuser_Set() const;
    bool is_is_superuser_Valid() const;

    bool isIsOnboarding() const;
    void setIsOnboarding(const bool &is_onboarding);
    bool is_is_onboarding_Set() const;
    bool is_is_onboarding_Valid() const;

    OAIOnboardingStep getOnboardingStep() const;
    void setOnboardingStep(const OAIOnboardingStep &onboarding_step);
    bool is_onboarding_step_Set() const;
    bool is_onboarding_step_Valid() const;

    QDateTime getCreatedAt() const;
    void setCreatedAt(const QDateTime &created_at);
    bool is_created_at_Set() const;
    bool is_created_at_Valid() const;

    QDateTime getLastLogin() const;
    void setLastLogin(const QDateTime &last_login);
    bool is_last_login_Set() const;
    bool is_last_login_Valid() const;

    QString getLastIp() const;
    void setLastIp(const QString &last_ip);
    bool is_last_ip_Set() const;
    bool is_last_ip_Valid() const;

    qint32 getLoginsCount() const;
    void setLoginsCount(const qint32 &logins_count);
    bool is_logins_count_Set() const;
    bool is_logins_count_Valid() const;

    QList<OAIIdentityRead> getIdentities() const;
    void setIdentities(const QList<OAIIdentityRead> &identities);
    bool is_identities_Set() const;
    bool is_identities_Valid() const;

    OAIObject getSettings() const;
    void setSettings(const OAIObject &settings);
    bool is_settings_Set() const;
    bool is_settings_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString email;
    bool m_email_isSet;
    bool m_email_isValid;

    bool email_verified;
    bool m_email_verified_isSet;
    bool m_email_verified_isValid;

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString given_name;
    bool m_given_name_isSet;
    bool m_given_name_isValid;

    QString family_name;
    bool m_family_name_isSet;
    bool m_family_name_isValid;

    QString picture;
    bool m_picture_isSet;
    bool m_picture_isValid;

    bool is_superuser;
    bool m_is_superuser_isSet;
    bool m_is_superuser_isValid;

    bool is_onboarding;
    bool m_is_onboarding_isSet;
    bool m_is_onboarding_isValid;

    OAIOnboardingStep onboarding_step;
    bool m_onboarding_step_isSet;
    bool m_onboarding_step_isValid;

    QDateTime created_at;
    bool m_created_at_isSet;
    bool m_created_at_isValid;

    QDateTime last_login;
    bool m_last_login_isSet;
    bool m_last_login_isValid;

    QString last_ip;
    bool m_last_ip_isSet;
    bool m_last_ip_isValid;

    qint32 logins_count;
    bool m_logins_count_isSet;
    bool m_logins_count_isValid;

    QList<OAIIdentityRead> identities;
    bool m_identities_isSet;
    bool m_identities_isValid;

    OAIObject settings;
    bool m_settings_isSet;
    bool m_settings_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOrgMemberRead)

#endif // OAIOrgMemberRead_H
