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
 * OAIConditionSetRuleRead.h
 *
 * 
 */

#ifndef OAIConditionSetRuleRead_H
#define OAIConditionSetRuleRead_H

#include <QJsonObject>

#include <QDateTime>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIConditionSetRuleRead : public OAIObject {
public:
    OAIConditionSetRuleRead();
    OAIConditionSetRuleRead(QString json);
    ~OAIConditionSetRuleRead() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getKey() const;
    void setKey(const QString &key);
    bool is_key_Set() const;
    bool is_key_Valid() const;

    QString getUserSet() const;
    void setUserSet(const QString &user_set);
    bool is_user_set_Set() const;
    bool is_user_set_Valid() const;

    QString getPermission() const;
    void setPermission(const QString &permission);
    bool is_permission_Set() const;
    bool is_permission_Valid() const;

    QString getResourceSet() const;
    void setResourceSet(const QString &resource_set);
    bool is_resource_set_Set() const;
    bool is_resource_set_Valid() const;

    QString getOrganizationId() const;
    void setOrganizationId(const QString &organization_id);
    bool is_organization_id_Set() const;
    bool is_organization_id_Valid() const;

    QString getProjectId() const;
    void setProjectId(const QString &project_id);
    bool is_project_id_Set() const;
    bool is_project_id_Valid() const;

    QString getEnvironmentId() const;
    void setEnvironmentId(const QString &environment_id);
    bool is_environment_id_Set() const;
    bool is_environment_id_Valid() const;

    QDateTime getCreatedAt() const;
    void setCreatedAt(const QDateTime &created_at);
    bool is_created_at_Set() const;
    bool is_created_at_Valid() const;

    QDateTime getUpdatedAt() const;
    void setUpdatedAt(const QDateTime &updated_at);
    bool is_updated_at_Set() const;
    bool is_updated_at_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString key;
    bool m_key_isSet;
    bool m_key_isValid;

    QString user_set;
    bool m_user_set_isSet;
    bool m_user_set_isValid;

    QString permission;
    bool m_permission_isSet;
    bool m_permission_isValid;

    QString resource_set;
    bool m_resource_set_isSet;
    bool m_resource_set_isValid;

    QString organization_id;
    bool m_organization_id_isSet;
    bool m_organization_id_isValid;

    QString project_id;
    bool m_project_id_isSet;
    bool m_project_id_isValid;

    QString environment_id;
    bool m_environment_id_isSet;
    bool m_environment_id_isValid;

    QDateTime created_at;
    bool m_created_at_isSet;
    bool m_created_at_isValid;

    QDateTime updated_at;
    bool m_updated_at_isSet;
    bool m_updated_at_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIConditionSetRuleRead)

#endif // OAIConditionSetRuleRead_H
