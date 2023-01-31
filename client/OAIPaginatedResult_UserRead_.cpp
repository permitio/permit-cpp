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

#include "OAIPaginatedResult_UserRead_.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPaginatedResult_UserRead_::OAIPaginatedResult_UserRead_(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPaginatedResult_UserRead_::OAIPaginatedResult_UserRead_() {
    this->initializeModel();
}

OAIPaginatedResult_UserRead_::~OAIPaginatedResult_UserRead_() {}

void OAIPaginatedResult_UserRead_::initializeModel() {

    m_data_isSet = false;
    m_data_isValid = false;

    m_total_count_isSet = false;
    m_total_count_isValid = false;

    m_page_count_isSet = false;
    m_page_count_isValid = false;
}

void OAIPaginatedResult_UserRead_::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPaginatedResult_UserRead_::fromJsonObject(QJsonObject json) {

    m_data_isValid = ::OpenAPI::fromJsonValue(data, json[QString("data")]);
    m_data_isSet = !json[QString("data")].isNull() && m_data_isValid;

    m_total_count_isValid = ::OpenAPI::fromJsonValue(total_count, json[QString("total_count")]);
    m_total_count_isSet = !json[QString("total_count")].isNull() && m_total_count_isValid;

    m_page_count_isValid = ::OpenAPI::fromJsonValue(page_count, json[QString("page_count")]);
    m_page_count_isSet = !json[QString("page_count")].isNull() && m_page_count_isValid;
}

QString OAIPaginatedResult_UserRead_::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPaginatedResult_UserRead_::asJsonObject() const {
    QJsonObject obj;
    if (data.size() > 0) {
        obj.insert(QString("data"), ::OpenAPI::toJsonValue(data));
    }
    if (m_total_count_isSet) {
        obj.insert(QString("total_count"), ::OpenAPI::toJsonValue(total_count));
    }
    if (m_page_count_isSet) {
        obj.insert(QString("page_count"), ::OpenAPI::toJsonValue(page_count));
    }
    return obj;
}

QList<OAIUserRead> OAIPaginatedResult_UserRead_::getData() const {
    return data;
}
void OAIPaginatedResult_UserRead_::setData(const QList<OAIUserRead> &data) {
    this->data = data;
    this->m_data_isSet = true;
}

bool OAIPaginatedResult_UserRead_::is_data_Set() const{
    return m_data_isSet;
}

bool OAIPaginatedResult_UserRead_::is_data_Valid() const{
    return m_data_isValid;
}

qint32 OAIPaginatedResult_UserRead_::getTotalCount() const {
    return total_count;
}
void OAIPaginatedResult_UserRead_::setTotalCount(const qint32 &total_count) {
    this->total_count = total_count;
    this->m_total_count_isSet = true;
}

bool OAIPaginatedResult_UserRead_::is_total_count_Set() const{
    return m_total_count_isSet;
}

bool OAIPaginatedResult_UserRead_::is_total_count_Valid() const{
    return m_total_count_isValid;
}

qint32 OAIPaginatedResult_UserRead_::getPageCount() const {
    return page_count;
}
void OAIPaginatedResult_UserRead_::setPageCount(const qint32 &page_count) {
    this->page_count = page_count;
    this->m_page_count_isSet = true;
}

bool OAIPaginatedResult_UserRead_::is_page_count_Set() const{
    return m_page_count_isSet;
}

bool OAIPaginatedResult_UserRead_::is_page_count_Valid() const{
    return m_page_count_isValid;
}

bool OAIPaginatedResult_UserRead_::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (data.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_total_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_page_count_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPaginatedResult_UserRead_::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_data_isValid && m_total_count_isValid && true;
}

} // namespace OpenAPI
