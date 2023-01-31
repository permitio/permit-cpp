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

#include "OAIElementsEnvTypeRead.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIElementsEnvTypeRead::OAIElementsEnvTypeRead(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIElementsEnvTypeRead::OAIElementsEnvTypeRead() {
    this->initializeModel();
}

OAIElementsEnvTypeRead::~OAIElementsEnvTypeRead() {}

void OAIElementsEnvTypeRead::initializeModel() {

    m_roles_to_levels_isSet = false;
    m_roles_to_levels_isValid = false;

    m_elements_type_isSet = false;
    m_elements_type_isValid = false;
}

void OAIElementsEnvTypeRead::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIElementsEnvTypeRead::fromJsonObject(QJsonObject json) {

    if(json["roles_to_levels"].isObject()){
        auto varmap = json["roles_to_levels"].toObject().toVariantMap();
        m_roles_to_levels_isValid = true;
        if(varmap.count() > 0){
            for(auto val : varmap.keys()){
                QList<OAIPermissionLevelRoleRead> item;
                auto jval = QJsonValue::fromVariant(varmap.value(val));
                m_roles_to_levels_isValid &= ::OpenAPI::fromJsonValue(item, jval);
                m_roles_to_levels_isSet &= !jval.isNull() && m_roles_to_levels_isValid;
                roles_to_levels.insert(roles_to_levels.end(), val, item);
            }
        }
    }

    m_elements_type_isValid = ::OpenAPI::fromJsonValue(elements_type, json[QString("elements_type")]);
    m_elements_type_isSet = !json[QString("elements_type")].isNull() && m_elements_type_isValid;
}

QString OAIElementsEnvTypeRead::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIElementsEnvTypeRead::asJsonObject() const {
    QJsonObject obj;
    if (roles_to_levels.size() > 0) {
        
        obj.insert(QString("roles_to_levels"), toJsonValue(roles_to_levels));
    }
    if (m_elements_type_isSet) {
        obj.insert(QString("elements_type"), ::OpenAPI::toJsonValue(elements_type));
    }
    return obj;
}

QMap<QString, QList<OAIPermissionLevelRoleRead>> OAIElementsEnvTypeRead::getRolesToLevels() const {
    return roles_to_levels;
}
void OAIElementsEnvTypeRead::setRolesToLevels(const QMap<QString, QList<OAIPermissionLevelRoleRead>> &roles_to_levels) {
    this->roles_to_levels = roles_to_levels;
    this->m_roles_to_levels_isSet = true;
}

bool OAIElementsEnvTypeRead::is_roles_to_levels_Set() const{
    return m_roles_to_levels_isSet;
}

bool OAIElementsEnvTypeRead::is_roles_to_levels_Valid() const{
    return m_roles_to_levels_isValid;
}

QString OAIElementsEnvTypeRead::getElementsType() const {
    return elements_type;
}
void OAIElementsEnvTypeRead::setElementsType(const QString &elements_type) {
    this->elements_type = elements_type;
    this->m_elements_type_isSet = true;
}

bool OAIElementsEnvTypeRead::is_elements_type_Set() const{
    return m_elements_type_isSet;
}

bool OAIElementsEnvTypeRead::is_elements_type_Valid() const{
    return m_elements_type_isValid;
}

bool OAIElementsEnvTypeRead::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (roles_to_levels.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_elements_type_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIElementsEnvTypeRead::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_roles_to_levels_isValid && m_elements_type_isValid && true;
}

} // namespace OpenAPI
