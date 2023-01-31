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
 * OAIAPIKeyScopeRead.h
 *
 * 
 */

#ifndef OAIAPIKeyScopeRead_H
#define OAIAPIKeyScopeRead_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAPIKeyScopeRead : public OAIObject {
public:
    OAIAPIKeyScopeRead();
    OAIAPIKeyScopeRead(QString json);
    ~OAIAPIKeyScopeRead() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

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

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString organization_id;
    bool m_organization_id_isSet;
    bool m_organization_id_isValid;

    QString project_id;
    bool m_project_id_isSet;
    bool m_project_id_isValid;

    QString environment_id;
    bool m_environment_id_isSet;
    bool m_environment_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAPIKeyScopeRead)

#endif // OAIAPIKeyScopeRead_H
