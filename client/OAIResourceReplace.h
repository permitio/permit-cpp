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
 * OAIResourceReplace.h
 *
 * 
 */

#ifndef OAIResourceReplace_H
#define OAIResourceReplace_H

#include <QJsonObject>

#include "OAIActionBlockEditable.h"
#include "OAIAttributeBlockEditable.h"
#include <QMap>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIActionBlockEditable;
class OAIAttributeBlockEditable;

class OAIResourceReplace : public OAIObject {
public:
    OAIResourceReplace();
    OAIResourceReplace(QString json);
    ~OAIResourceReplace() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getUrn() const;
    void setUrn(const QString &urn);
    bool is_urn_Set() const;
    bool is_urn_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QMap<QString, OAIActionBlockEditable> getActions() const;
    void setActions(const QMap<QString, OAIActionBlockEditable> &actions);
    bool is_actions_Set() const;
    bool is_actions_Valid() const;

    QMap<QString, OAIAttributeBlockEditable> getAttributes() const;
    void setAttributes(const QMap<QString, OAIAttributeBlockEditable> &attributes);
    bool is_attributes_Set() const;
    bool is_attributes_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString urn;
    bool m_urn_isSet;
    bool m_urn_isValid;

    QString description;
    bool m_description_isSet;
    bool m_description_isValid;

    QMap<QString, OAIActionBlockEditable> actions;
    bool m_actions_isSet;
    bool m_actions_isValid;

    QMap<QString, OAIAttributeBlockEditable> attributes;
    bool m_attributes_isSet;
    bool m_attributes_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIResourceReplace)

#endif // OAIResourceReplace_H
