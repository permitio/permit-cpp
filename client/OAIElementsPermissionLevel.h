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
 * OAIElementsPermissionLevel.h
 *
 * An enumeration.
 */

#ifndef OAIElementsPermissionLevel_H
#define OAIElementsPermissionLevel_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIElementsPermissionLevel : public OAIEnum {
public:
    OAIElementsPermissionLevel();
    OAIElementsPermissionLevel(QString json);
    ~OAIElementsPermissionLevel() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIElementsPermissionLevel {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        LEVEL_1, 
        LEVEL_2, 
        LEVEL_3, 
        LEVEL_4, 
        HIDDEN, 
        UNCONFIGURED
    };
    OAIElementsPermissionLevel::eOAIElementsPermissionLevel getValue() const;
    void setValue(const OAIElementsPermissionLevel::eOAIElementsPermissionLevel& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIElementsPermissionLevel m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIElementsPermissionLevel)

#endif // OAIElementsPermissionLevel_H
