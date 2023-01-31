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
 * OAIElementsRoleRead.h
 *
 * 
 */

#ifndef OAIElementsRoleRead_H
#define OAIElementsRoleRead_H

#include <QJsonObject>

#include "OAIElementsPermissionLevel.h"
#include <QDateTime>
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIElementsRoleRead : public OAIObject {
public:
    OAIElementsRoleRead();
    OAIElementsRoleRead(QString json);
    ~OAIElementsRoleRead() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QList<QString> getPermissions() const;
    void setPermissions(const QList<QString> &permissions);
    bool is_permissions_Set() const;
    bool is_permissions_Valid() const;

    QList<QString> getExtends() const;
    void setExtends(const QList<QString> &extends);
    bool is_extends_Set() const;
    bool is_extends_Valid() const;

    QString getKey() const;
    void setKey(const QString &key);
    bool is_key_Set() const;
    bool is_key_Valid() const;

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

    OAIElementsPermissionLevel getPermissionLevel() const;
    void setPermissionLevel(const OAIElementsPermissionLevel &permission_level);
    bool is_permission_level_Set() const;
    bool is_permission_level_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString description;
    bool m_description_isSet;
    bool m_description_isValid;

    QList<QString> permissions;
    bool m_permissions_isSet;
    bool m_permissions_isValid;

    QList<QString> extends;
    bool m_extends_isSet;
    bool m_extends_isValid;

    QString key;
    bool m_key_isSet;
    bool m_key_isValid;

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

    OAIElementsPermissionLevel permission_level;
    bool m_permission_level_isSet;
    bool m_permission_level_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIElementsRoleRead)

#endif // OAIElementsRoleRead_H