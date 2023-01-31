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
 * OAIAttributeBlockEditable.h
 *
 * 
 */

#ifndef OAIAttributeBlockEditable_H
#define OAIAttributeBlockEditable_H

#include <QJsonObject>

#include "OAIAttributeType.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAttributeBlockEditable : public OAIObject {
public:
    OAIAttributeBlockEditable();
    OAIAttributeBlockEditable(QString json);
    ~OAIAttributeBlockEditable() override;

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
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAttributeBlockEditable)

#endif // OAIAttributeBlockEditable_H