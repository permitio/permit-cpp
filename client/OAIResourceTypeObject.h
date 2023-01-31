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
 * OAIResourceTypeObject.h
 *
 * 
 */

#ifndef OAIResourceTypeObject_H
#define OAIResourceTypeObject_H

#include <QJsonObject>

#include "OAIResourceAttributes.h"
#include <QDateTime>
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIResourceAttributes;

class OAIResourceTypeObject : public OAIObject {
public:
    OAIResourceTypeObject();
    OAIResourceTypeObject(QString json);
    ~OAIResourceTypeObject() override;

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

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QList<OAIResourceAttributes> getAttributes() const;
    void setAttributes(const QList<OAIResourceAttributes> &attributes);
    bool is_attributes_Set() const;
    bool is_attributes_Valid() const;

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

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;

    QList<OAIResourceAttributes> attributes;
    bool m_attributes_isSet;
    bool m_attributes_isValid;

    QDateTime created_at;
    bool m_created_at_isSet;
    bool m_created_at_isValid;

    QDateTime updated_at;
    bool m_updated_at_isSet;
    bool m_updated_at_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIResourceTypeObject)

#endif // OAIResourceTypeObject_H
