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
 * OAIResourceAttributeRead.h
 *
 * 
 */

#ifndef OAIResourceAttributeRead_H
#define OAIResourceAttributeRead_H

#include <QJsonObject>

#include "OAIAttributeType.h"
#include <QDateTime>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIResourceAttributeRead : public OAIObject {
public:
    OAIResourceAttributeRead();
    OAIResourceAttributeRead(QString json);
    ~OAIResourceAttributeRead() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIAttributeType getType() const;
    void setType(const OAIAttributeType &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getKey() const;
    void setKey(const QString &key);
    bool is_key_Set() const;
    bool is_key_Valid() const;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getResourceId() const;
    void setResourceId(const QString &resource_id);
    bool is_resource_id_Set() const;
    bool is_resource_id_Valid() const;

    QString getResourceKey() const;
    void setResourceKey(const QString &resource_key);
    bool is_resource_key_Set() const;
    bool is_resource_key_Valid() const;

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

    OAIAttributeType type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString key;
    bool m_key_isSet;
    bool m_key_isValid;

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString resource_id;
    bool m_resource_id_isSet;
    bool m_resource_id_isValid;

    QString resource_key;
    bool m_resource_key_isSet;
    bool m_resource_key_isValid;

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

Q_DECLARE_METATYPE(OpenAPI::OAIResourceAttributeRead)

#endif // OAIResourceAttributeRead_H