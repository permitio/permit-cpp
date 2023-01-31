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
 * OAIResourceInstanceRead.h
 *
 * 
 */

#ifndef OAIResourceInstanceRead_H
#define OAIResourceInstanceRead_H

#include <QJsonObject>

#include "OAIObject.h"
#include <QDateTime>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIResourceInstanceRead : public OAIObject {
public:
    OAIResourceInstanceRead();
    OAIResourceInstanceRead(QString json);
    ~OAIResourceInstanceRead() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getKey() const;
    void setKey(const QString &key);
    bool is_key_Set() const;
    bool is_key_Valid() const;

    QString getTenant() const;
    void setTenant(const QString &tenant);
    bool is_tenant_Set() const;
    bool is_tenant_Valid() const;

    QString getResource() const;
    void setResource(const QString &resource);
    bool is_resource_Set() const;
    bool is_resource_Valid() const;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

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

    QString getResourceId() const;
    void setResourceId(const QString &resource_id);
    bool is_resource_id_Set() const;
    bool is_resource_id_Valid() const;

    QString getTenantId() const;
    void setTenantId(const QString &tenant_id);
    bool is_tenant_id_Set() const;
    bool is_tenant_id_Valid() const;

    OAIObject getAttributes() const;
    void setAttributes(const OAIObject &attributes);
    bool is_attributes_Set() const;
    bool is_attributes_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString key;
    bool m_key_isSet;
    bool m_key_isValid;

    QString tenant;
    bool m_tenant_isSet;
    bool m_tenant_isValid;

    QString resource;
    bool m_resource_isSet;
    bool m_resource_isValid;

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

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

    QString resource_id;
    bool m_resource_id_isSet;
    bool m_resource_id_isValid;

    QString tenant_id;
    bool m_tenant_id_isSet;
    bool m_tenant_id_isValid;

    OAIObject attributes;
    bool m_attributes_isSet;
    bool m_attributes_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIResourceInstanceRead)

#endif // OAIResourceInstanceRead_H