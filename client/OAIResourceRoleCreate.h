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
 * OAIResourceRoleCreate.h
 *
 * 
 */

#ifndef OAIResourceRoleCreate_H
#define OAIResourceRoleCreate_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIResourceRoleCreate : public OAIObject {
public:
    OAIResourceRoleCreate();
    OAIResourceRoleCreate(QString json);
    ~OAIResourceRoleCreate() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getKey() const;
    void setKey(const QString &key);
    bool is_key_Set() const;
    bool is_key_Valid() const;

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

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString key;
    bool m_key_isSet;
    bool m_key_isValid;

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
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIResourceRoleCreate)

#endif // OAIResourceRoleCreate_H
