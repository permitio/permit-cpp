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
 * OAIAuthnMeAPIKeyRead.h
 *
 * 
 */

#ifndef OAIAuthnMeAPIKeyRead_H
#define OAIAuthnMeAPIKeyRead_H

#include <QJsonObject>

#include "OAIAPIKeyOwnerType.h"
#include "OAIMemberAccessObj.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAuthnMeAPIKeyRead : public OAIObject {
public:
    OAIAuthnMeAPIKeyRead();
    OAIAuthnMeAPIKeyRead(QString json);
    ~OAIAuthnMeAPIKeyRead() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getActorType() const;
    void setActorType(const QString &actor_type);
    bool is_actor_type_Set() const;
    bool is_actor_type_Valid() const;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    OAIMemberAccessObj getObjectType() const;
    void setObjectType(const OAIMemberAccessObj &object_type);
    bool is_object_type_Set() const;
    bool is_object_type_Valid() const;

    OAIAPIKeyOwnerType getOwnerType() const;
    void setOwnerType(const OAIAPIKeyOwnerType &owner_type);
    bool is_owner_type_Set() const;
    bool is_owner_type_Valid() const;

    QString getOrgId() const;
    void setOrgId(const QString &org_id);
    bool is_org_id_Set() const;
    bool is_org_id_Valid() const;

    QString getProjectId() const;
    void setProjectId(const QString &project_id);
    bool is_project_id_Set() const;
    bool is_project_id_Valid() const;

    QString getEnvId() const;
    void setEnvId(const QString &env_id);
    bool is_env_id_Set() const;
    bool is_env_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString actor_type;
    bool m_actor_type_isSet;
    bool m_actor_type_isValid;

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    OAIMemberAccessObj object_type;
    bool m_object_type_isSet;
    bool m_object_type_isValid;

    OAIAPIKeyOwnerType owner_type;
    bool m_owner_type_isSet;
    bool m_owner_type_isValid;

    QString org_id;
    bool m_org_id_isSet;
    bool m_org_id_isValid;

    QString project_id;
    bool m_project_id_isSet;
    bool m_project_id_isValid;

    QString env_id;
    bool m_env_id_isSet;
    bool m_env_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAuthnMeAPIKeyRead)

#endif // OAIAuthnMeAPIKeyRead_H
