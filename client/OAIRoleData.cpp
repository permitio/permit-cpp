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

#include "OAIRoleData.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIRoleData::OAIRoleData(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIRoleData::OAIRoleData() {
    this->initializeModel();
}

OAIRoleData::~OAIRoleData() {}

void OAIRoleData::initializeModel() {

    m_grants_isSet = false;
    m_grants_isValid = false;
}

void OAIRoleData::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIRoleData::fromJsonObject(QJsonObject json) {

    if(json["grants"].isObject()){
        auto varmap = json["grants"].toObject().toVariantMap();
        m_grants_isValid = true;
        if(varmap.count() > 0){
            for(auto val : varmap.keys()){
                QList<QString> item;
                auto jval = QJsonValue::fromVariant(varmap.value(val));
                m_grants_isValid &= ::OpenAPI::fromJsonValue(item, jval);
                m_grants_isSet &= !jval.isNull() && m_grants_isValid;
                grants.insert(grants.end(), val, item);
            }
        }
    }
}

QString OAIRoleData::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIRoleData::asJsonObject() const {
    QJsonObject obj;
    if (grants.size() > 0) {
        
        obj.insert(QString("grants"), toJsonValue(grants));
    }
    return obj;
}

QMap<QString, QList<QString>> OAIRoleData::getGrants() const {
    return grants;
}
void OAIRoleData::setGrants(const QMap<QString, QList<QString>> &grants) {
    this->grants = grants;
    this->m_grants_isSet = true;
}

bool OAIRoleData::is_grants_Set() const{
    return m_grants_isSet;
}

bool OAIRoleData::is_grants_Valid() const{
    return m_grants_isValid;
}

bool OAIRoleData::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (grants.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIRoleData::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
