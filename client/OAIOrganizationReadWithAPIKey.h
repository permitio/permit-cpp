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
 * OAIOrganizationReadWithAPIKey.h
 *
 * 
 */

#ifndef OAIOrganizationReadWithAPIKey_H
#define OAIOrganizationReadWithAPIKey_H

#include <QJsonObject>

#include "OAIObject.h"
#include <QDateTime>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIOrganizationReadWithAPIKey : public OAIObject {
public:
    OAIOrganizationReadWithAPIKey();
    OAIOrganizationReadWithAPIKey(QString json);
    ~OAIOrganizationReadWithAPIKey() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getKey() const;
    void setKey(const QString &key);
    bool is_key_Set() const;
    bool is_key_Valid() const;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QDateTime getCreatedAt() const;
    void setCreatedAt(const QDateTime &created_at);
    bool is_created_at_Set() const;
    bool is_created_at_Valid() const;

    QDateTime getUpdatedAt() const;
    void setUpdatedAt(const QDateTime &updated_at);
    bool is_updated_at_Set() const;
    bool is_updated_at_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    OAIObject getSettings() const;
    void setSettings(const OAIObject &settings);
    bool is_settings_Set() const;
    bool is_settings_Valid() const;

    QString getApiKeyId() const;
    void setApiKeyId(const QString &api_key_id);
    bool is_api_key_id_Set() const;
    bool is_api_key_id_Valid() const;

    QString getApiKeySecret() const;
    void setApiKeySecret(const QString &api_key_secret);
    bool is_api_key_secret_Set() const;
    bool is_api_key_secret_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString key;
    bool m_key_isSet;
    bool m_key_isValid;

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    QDateTime created_at;
    bool m_created_at_isSet;
    bool m_created_at_isValid;

    QDateTime updated_at;
    bool m_updated_at_isSet;
    bool m_updated_at_isValid;

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;

    OAIObject settings;
    bool m_settings_isSet;
    bool m_settings_isValid;

    QString api_key_id;
    bool m_api_key_id_isSet;
    bool m_api_key_id_isValid;

    QString api_key_secret;
    bool m_api_key_secret_isSet;
    bool m_api_key_secret_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOrganizationReadWithAPIKey)

#endif // OAIOrganizationReadWithAPIKey_H
