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
 * OAIPolicyRepoRead.h
 *
 * 
 */

#ifndef OAIPolicyRepoRead_H
#define OAIPolicyRepoRead_H

#include <QJsonObject>

#include "OAIPolicyRepoStatus.h"
#include "OAISSHAuthData.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAISSHAuthData;

class OAIPolicyRepoRead : public OAIObject {
public:
    OAIPolicyRepoRead();
    OAIPolicyRepoRead(QString json);
    ~OAIPolicyRepoRead() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    OAIPolicyRepoStatus getStatus() const;
    void setStatus(const OAIPolicyRepoStatus &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    QString getKey() const;
    void setKey(const QString &key);
    bool is_key_Set() const;
    bool is_key_Valid() const;

    QString getUrl() const;
    void setUrl(const QString &url);
    bool is_url_Set() const;
    bool is_url_Valid() const;

    QString getMainBranchName() const;
    void setMainBranchName(const QString &main_branch_name);
    bool is_main_branch_name_Set() const;
    bool is_main_branch_name_Valid() const;

    OAISSHAuthData getCredentials() const;
    void setCredentials(const OAISSHAuthData &credentials);
    bool is_credentials_Set() const;
    bool is_credentials_Valid() const;

    bool isActivateWhenValidated() const;
    void setActivateWhenValidated(const bool &activate_when_validated);
    bool is_activate_when_validated_Set() const;
    bool is_activate_when_validated_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    OAIPolicyRepoStatus status;
    bool m_status_isSet;
    bool m_status_isValid;

    QString key;
    bool m_key_isSet;
    bool m_key_isValid;

    QString url;
    bool m_url_isSet;
    bool m_url_isValid;

    QString main_branch_name;
    bool m_main_branch_name_isSet;
    bool m_main_branch_name_isValid;

    OAISSHAuthData credentials;
    bool m_credentials_isSet;
    bool m_credentials_isValid;

    bool activate_when_validated;
    bool m_activate_when_validated_isSet;
    bool m_activate_when_validated_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPolicyRepoRead)

#endif // OAIPolicyRepoRead_H