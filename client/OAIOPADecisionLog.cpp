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

#include "OAIOPADecisionLog.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOPADecisionLog::OAIOPADecisionLog(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOPADecisionLog::OAIOPADecisionLog() {
    this->initializeModel();
}

OAIOPADecisionLog::~OAIOPADecisionLog() {}

void OAIOPADecisionLog::initializeModel() {

    m_decision_id_isSet = false;
    m_decision_id_isValid = false;

    m_labels_isSet = false;
    m_labels_isValid = false;

    m_run_id_isSet = false;
    m_run_id_isValid = false;

    m_timestamp_isSet = false;
    m_timestamp_isValid = false;

    m_path_isSet = false;
    m_path_isValid = false;

    m_input_isSet = false;
    m_input_isValid = false;

    m_result_isSet = false;
    m_result_isValid = false;
}

void OAIOPADecisionLog::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOPADecisionLog::fromJsonObject(QJsonObject json) {

    m_decision_id_isValid = ::OpenAPI::fromJsonValue(decision_id, json[QString("decision_id")]);
    m_decision_id_isSet = !json[QString("decision_id")].isNull() && m_decision_id_isValid;

    m_labels_isValid = ::OpenAPI::fromJsonValue(labels, json[QString("labels")]);
    m_labels_isSet = !json[QString("labels")].isNull() && m_labels_isValid;

    m_run_id_isValid = ::OpenAPI::fromJsonValue(run_id, json[QString("run_id")]);
    m_run_id_isSet = !json[QString("run_id")].isNull() && m_run_id_isValid;

    m_timestamp_isValid = ::OpenAPI::fromJsonValue(timestamp, json[QString("timestamp")]);
    m_timestamp_isSet = !json[QString("timestamp")].isNull() && m_timestamp_isValid;

    m_path_isValid = ::OpenAPI::fromJsonValue(path, json[QString("path")]);
    m_path_isSet = !json[QString("path")].isNull() && m_path_isValid;

    m_input_isValid = ::OpenAPI::fromJsonValue(input, json[QString("input")]);
    m_input_isSet = !json[QString("input")].isNull() && m_input_isValid;

    m_result_isValid = ::OpenAPI::fromJsonValue(result, json[QString("result")]);
    m_result_isSet = !json[QString("result")].isNull() && m_result_isValid;
}

QString OAIOPADecisionLog::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOPADecisionLog::asJsonObject() const {
    QJsonObject obj;
    if (m_decision_id_isSet) {
        obj.insert(QString("decision_id"), ::OpenAPI::toJsonValue(decision_id));
    }
    if (labels.isSet()) {
        obj.insert(QString("labels"), ::OpenAPI::toJsonValue(labels));
    }
    if (m_run_id_isSet) {
        obj.insert(QString("run_id"), ::OpenAPI::toJsonValue(run_id));
    }
    if (m_timestamp_isSet) {
        obj.insert(QString("timestamp"), ::OpenAPI::toJsonValue(timestamp));
    }
    if (m_path_isSet) {
        obj.insert(QString("path"), ::OpenAPI::toJsonValue(path));
    }
    if (m_input_isSet) {
        obj.insert(QString("input"), ::OpenAPI::toJsonValue(input));
    }
    if (m_result_isSet) {
        obj.insert(QString("result"), ::OpenAPI::toJsonValue(result));
    }
    return obj;
}

QString OAIOPADecisionLog::getDecisionId() const {
    return decision_id;
}
void OAIOPADecisionLog::setDecisionId(const QString &decision_id) {
    this->decision_id = decision_id;
    this->m_decision_id_isSet = true;
}

bool OAIOPADecisionLog::is_decision_id_Set() const{
    return m_decision_id_isSet;
}

bool OAIOPADecisionLog::is_decision_id_Valid() const{
    return m_decision_id_isValid;
}

OAILabels OAIOPADecisionLog::getLabels() const {
    return labels;
}
void OAIOPADecisionLog::setLabels(const OAILabels &labels) {
    this->labels = labels;
    this->m_labels_isSet = true;
}

bool OAIOPADecisionLog::is_labels_Set() const{
    return m_labels_isSet;
}

bool OAIOPADecisionLog::is_labels_Valid() const{
    return m_labels_isValid;
}

QString OAIOPADecisionLog::getRunId() const {
    return run_id;
}
void OAIOPADecisionLog::setRunId(const QString &run_id) {
    this->run_id = run_id;
    this->m_run_id_isSet = true;
}

bool OAIOPADecisionLog::is_run_id_Set() const{
    return m_run_id_isSet;
}

bool OAIOPADecisionLog::is_run_id_Valid() const{
    return m_run_id_isValid;
}

QDateTime OAIOPADecisionLog::getTimestamp() const {
    return timestamp;
}
void OAIOPADecisionLog::setTimestamp(const QDateTime &timestamp) {
    this->timestamp = timestamp;
    this->m_timestamp_isSet = true;
}

bool OAIOPADecisionLog::is_timestamp_Set() const{
    return m_timestamp_isSet;
}

bool OAIOPADecisionLog::is_timestamp_Valid() const{
    return m_timestamp_isValid;
}

QString OAIOPADecisionLog::getPath() const {
    return path;
}
void OAIOPADecisionLog::setPath(const QString &path) {
    this->path = path;
    this->m_path_isSet = true;
}

bool OAIOPADecisionLog::is_path_Set() const{
    return m_path_isSet;
}

bool OAIOPADecisionLog::is_path_Valid() const{
    return m_path_isValid;
}

OAIObject OAIOPADecisionLog::getInput() const {
    return input;
}
void OAIOPADecisionLog::setInput(const OAIObject &input) {
    this->input = input;
    this->m_input_isSet = true;
}

bool OAIOPADecisionLog::is_input_Set() const{
    return m_input_isSet;
}

bool OAIOPADecisionLog::is_input_Valid() const{
    return m_input_isValid;
}

OAIObject OAIOPADecisionLog::getResult() const {
    return result;
}
void OAIOPADecisionLog::setResult(const OAIObject &result) {
    this->result = result;
    this->m_result_isSet = true;
}

bool OAIOPADecisionLog::is_result_Set() const{
    return m_result_isSet;
}

bool OAIOPADecisionLog::is_result_Valid() const{
    return m_result_isValid;
}

bool OAIOPADecisionLog::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_decision_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (labels.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_run_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_timestamp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_path_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_input_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_result_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOPADecisionLog::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_decision_id_isValid && m_labels_isValid && m_timestamp_isValid && true;
}

} // namespace OpenAPI