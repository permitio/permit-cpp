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

#ifndef OAI_OAIElementsConfigsApi_H
#define OAI_OAIElementsConfigsApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIElementsConfigCreate.h"
#include "OAIElementsConfigRead.h"
#include "OAIElementsConfigRuntimeRead.h"
#include "OAIElementsConfigUpdate.h"
#include "OAIElementsEnvTypeRead.h"
#include "OAIElementsEnvTypeUpdate.h"
#include "OAIElementsType.h"
#include "OAIHTTPValidationError.h"
#include "OAIPaginatedResult_ElementsConfigRead_.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIElementsConfigsApi : public QObject {
    Q_OBJECT

public:
    OAIElementsConfigsApi(const int timeOut = 0);
    ~OAIElementsConfigsApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables = QMap<QString, OAIServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(const QString &style);
    QString getParamStyleSuffix(const QString &style);
    QString getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode);

    /**
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  oai_elements_config_create OAIElementsConfigCreate [required]
    */
    void createElementsConfig(const QString &proj_id, const QString &env_id, const OAIElementsConfigCreate &oai_elements_config_create);

    /**
    * @param[in]  elements_config_id QString [required]
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    */
    void deleteElementsConfig(const QString &elements_config_id, const QString &proj_id, const QString &env_id);

    /**
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  elements_config_id QString [required]
    */
    void getElementsConfig(const QString &proj_id, const QString &env_id, const QString &elements_config_id);

    /**
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  elements_config_id QString [required]
    */
    void getElementsConfigRuntime(const QString &proj_id, const QString &env_id, const QString &elements_config_id);

    /**
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  element_type OAIElementsType [required]
    */
    void getElementsTypeConfig(const QString &proj_id, const QString &env_id, const OAIElementsType &element_type);

    /**
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  page qint32 [optional]
    * @param[in]  per_page qint32 [optional]
    */
    void listElementsConfigs(const QString &proj_id, const QString &env_id, const ::OpenAPI::OptionalParam<qint32> &page = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &per_page = ::OpenAPI::OptionalParam<qint32>());

    /**
    * @param[in]  elements_config_id QString [required]
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  oai_elements_config_update OAIElementsConfigUpdate [required]
    */
    void updateElementsConfig(const QString &elements_config_id, const QString &proj_id, const QString &env_id, const OAIElementsConfigUpdate &oai_elements_config_update);

    /**
    * @param[in]  element_type OAIElementsType [required]
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  oai_elements_env_type_update OAIElementsEnvTypeUpdate [required]
    */
    void updateElementsTypePermissions(const OAIElementsType &element_type, const QString &proj_id, const QString &env_id, const OAIElementsEnvTypeUpdate &oai_elements_env_type_update);


private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<OAIServerConfiguration>> _serverConfigs;
    QMap<QString, QString> _apiKeys;
    QString _bearerToken;
    QString _username;
    QString _password;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> _defaultHeaders;
    bool _isResponseCompressionEnabled;
    bool _isRequestCompressionEnabled;
    OAIHttpRequestInput _latestInput;
    OAIHttpRequestWorker *_latestWorker;
    QStringList _latestScope;
    OauthCode _authFlow;
    OauthImplicit _implicitFlow;
    OauthCredentials _credentialFlow;
    OauthPassword _passwordFlow;
    int _OauthMethod = 0;

    void createElementsConfigCallback(OAIHttpRequestWorker *worker);
    void deleteElementsConfigCallback(OAIHttpRequestWorker *worker);
    void getElementsConfigCallback(OAIHttpRequestWorker *worker);
    void getElementsConfigRuntimeCallback(OAIHttpRequestWorker *worker);
    void getElementsTypeConfigCallback(OAIHttpRequestWorker *worker);
    void listElementsConfigsCallback(OAIHttpRequestWorker *worker);
    void updateElementsConfigCallback(OAIHttpRequestWorker *worker);
    void updateElementsTypePermissionsCallback(OAIHttpRequestWorker *worker);

signals:

    void createElementsConfigSignal(OAIElementsConfigRead summary);
    void deleteElementsConfigSignal();
    void getElementsConfigSignal(OAIElementsConfigRead summary);
    void getElementsConfigRuntimeSignal(OAIElementsConfigRuntimeRead summary);
    void getElementsTypeConfigSignal(OAIElementsEnvTypeRead summary);
    void listElementsConfigsSignal(OAIPaginatedResult_ElementsConfigRead_ summary);
    void updateElementsConfigSignal(OAIElementsConfigRead summary);
    void updateElementsTypePermissionsSignal(OAIElementsEnvTypeRead summary);

    void createElementsConfigSignalFull(OAIHttpRequestWorker *worker, OAIElementsConfigRead summary);
    void deleteElementsConfigSignalFull(OAIHttpRequestWorker *worker);
    void getElementsConfigSignalFull(OAIHttpRequestWorker *worker, OAIElementsConfigRead summary);
    void getElementsConfigRuntimeSignalFull(OAIHttpRequestWorker *worker, OAIElementsConfigRuntimeRead summary);
    void getElementsTypeConfigSignalFull(OAIHttpRequestWorker *worker, OAIElementsEnvTypeRead summary);
    void listElementsConfigsSignalFull(OAIHttpRequestWorker *worker, OAIPaginatedResult_ElementsConfigRead_ summary);
    void updateElementsConfigSignalFull(OAIHttpRequestWorker *worker, OAIElementsConfigRead summary);
    void updateElementsTypePermissionsSignalFull(OAIHttpRequestWorker *worker, OAIElementsEnvTypeRead summary);

    void createElementsConfigSignalE(OAIElementsConfigRead summary, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteElementsConfigSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void getElementsConfigSignalE(OAIElementsConfigRead summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getElementsConfigRuntimeSignalE(OAIElementsConfigRuntimeRead summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getElementsTypeConfigSignalE(OAIElementsEnvTypeRead summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listElementsConfigsSignalE(OAIPaginatedResult_ElementsConfigRead_ summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateElementsConfigSignalE(OAIElementsConfigRead summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateElementsTypePermissionsSignalE(OAIElementsEnvTypeRead summary, QNetworkReply::NetworkError error_type, QString error_str);

    void createElementsConfigSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteElementsConfigSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getElementsConfigSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getElementsConfigRuntimeSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getElementsTypeConfigSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listElementsConfigsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateElementsConfigSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateElementsTypePermissionsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
