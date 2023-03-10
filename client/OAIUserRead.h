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
 * OAIUserRead.h
 *
 * 
 */

#ifndef OAIUserRead_H
#define OAIUserRead_H

#include <QJsonObject>

#include "OAIObject.h"
#include "OAIUserRole.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIUserRole;

class OAIUserRead : public OAIObject {
public:
    OAIUserRead();
    OAIUserRead(QString json);
    ~OAIUserRead() override;

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

    QList<OAIUserRole> getRoles() const;
    void setRoles(const QList<OAIUserRole> &roles);
    bool is_roles_Set() const;
    bool is_roles_Valid() const;

    QString getEmail() const;
    void setEmail(const QString &email);
    bool is_email_Set() const;
    bool is_email_Valid() const;

    QString getFirstName() const;
    void setFirstName(const QString &first_name);
    bool is_first_name_Set() const;
    bool is_first_name_Valid() const;

    QString getLastName() const;
    void setLastName(const QString &last_name);
    bool is_last_name_Set() const;
    bool is_last_name_Valid() const;

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

    QList<OAIUserRole> roles;
    bool m_roles_isSet;
    bool m_roles_isValid;

    QString email;
    bool m_email_isSet;
    bool m_email_isValid;

    QString first_name;
    bool m_first_name_isSet;
    bool m_first_name_isValid;

    QString last_name;
    bool m_last_name_isSet;
    bool m_last_name_isValid;

    OAIObject attributes;
    bool m_attributes_isSet;
    bool m_attributes_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUserRead)

#endif // OAIUserRead_H
