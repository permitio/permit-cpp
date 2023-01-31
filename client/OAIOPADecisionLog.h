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
 * OAIOPADecisionLog.h
 *
 * 
 */

#ifndef OAIOPADecisionLog_H
#define OAIOPADecisionLog_H

#include <QJsonObject>

#include "OAILabels.h"
#include "OAIObject.h"
#include <QDateTime>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAILabels;

class OAIOPADecisionLog : public OAIObject {
public:
    OAIOPADecisionLog();
    OAIOPADecisionLog(QString json);
    ~OAIOPADecisionLog() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getDecisionId() const;
    void setDecisionId(const QString &decision_id);
    bool is_decision_id_Set() const;
    bool is_decision_id_Valid() const;

    OAILabels getLabels() const;
    void setLabels(const OAILabels &labels);
    bool is_labels_Set() const;
    bool is_labels_Valid() const;

    QString getRunId() const;
    void setRunId(const QString &run_id);
    bool is_run_id_Set() const;
    bool is_run_id_Valid() const;

    QDateTime getTimestamp() const;
    void setTimestamp(const QDateTime &timestamp);
    bool is_timestamp_Set() const;
    bool is_timestamp_Valid() const;

    QString getPath() const;
    void setPath(const QString &path);
    bool is_path_Set() const;
    bool is_path_Valid() const;

    OAIObject getInput() const;
    void setInput(const OAIObject &input);
    bool is_input_Set() const;
    bool is_input_Valid() const;

    OAIObject getResult() const;
    void setResult(const OAIObject &result);
    bool is_result_Set() const;
    bool is_result_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString decision_id;
    bool m_decision_id_isSet;
    bool m_decision_id_isValid;

    OAILabels labels;
    bool m_labels_isSet;
    bool m_labels_isValid;

    QString run_id;
    bool m_run_id_isSet;
    bool m_run_id_isValid;

    QDateTime timestamp;
    bool m_timestamp_isSet;
    bool m_timestamp_isValid;

    QString path;
    bool m_path_isSet;
    bool m_path_isValid;

    OAIObject input;
    bool m_input_isSet;
    bool m_input_isValid;

    OAIObject result;
    bool m_result_isSet;
    bool m_result_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOPADecisionLog)

#endif // OAIOPADecisionLog_H