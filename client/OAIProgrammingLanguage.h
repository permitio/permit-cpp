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
 * OAIProgrammingLanguage.h
 *
 * An enumeration.
 */

#ifndef OAIProgrammingLanguage_H
#define OAIProgrammingLanguage_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIProgrammingLanguage : public OAIEnum {
public:
    OAIProgrammingLanguage();
    OAIProgrammingLanguage(QString json);
    ~OAIProgrammingLanguage() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIProgrammingLanguage {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        JAVASCRIPT, 
        PYTHON, 
        DOTNET, 
        GOLANG, 
        JAVA, 
        KONG_GATEWAY
    };
    OAIProgrammingLanguage::eOAIProgrammingLanguage getValue() const;
    void setValue(const OAIProgrammingLanguage::eOAIProgrammingLanguage& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIProgrammingLanguage m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProgrammingLanguage)

#endif // OAIProgrammingLanguage_H