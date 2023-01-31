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

#ifndef OAI_OAIPolicyDecisionPointsApi_H
#define OAI_OAIPolicyDecisionPointsApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIHTTPValidationError.h"
#include "OAIPDPConfigRead.h"
#include "OAIPDPStateUpdate.h"
#include "OAIRemoteConfig.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIPolicyDecisionPointsApi : public QObject {
    Q_OBJECT

public:
    OAIPolicyDecisionPointsApi(const int timeOut = 0);
    ~OAIPolicyDecisionPointsApi();

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
    * @param[in]  oaipdp_state_update OAIPDPStateUpdate [required]
    */
    void getAuthenticatingPdpConfigValues(const OAIPDPStateUpdate &oaipdp_state_update);


    void getAuthenticatingPdpConfigValuesLegacy();

    /**
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  pdp_id QString [required]
    */
    void getPdpConfigValues(const QString &proj_id, const QString &env_id, const QString &pdp_id);

    /**
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  page qint32 [optional]
    * @param[in]  per_page qint32 [optional]
    */
    void listPdpConfigs(const QString &proj_id, const QString &env_id, const ::OpenAPI::OptionalParam<qint32> &page = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &per_page = ::OpenAPI::OptionalParam<qint32>());

    /**
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  pdp_id QString [required]
    */
    void rotatePdpApiKey(const QString &proj_id, const QString &env_id, const QString &pdp_id);


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

    void getAuthenticatingPdpConfigValuesCallback(OAIHttpRequestWorker *worker);
    void getAuthenticatingPdpConfigValuesLegacyCallback(OAIHttpRequestWorker *worker);
    void getPdpConfigValuesCallback(OAIHttpRequestWorker *worker);
    void listPdpConfigsCallback(OAIHttpRequestWorker *worker);
    void rotatePdpApiKeyCallback(OAIHttpRequestWorker *worker);

signals:

    void getAuthenticatingPdpConfigValuesSignal(OAIRemoteConfig summary);
    void getAuthenticatingPdpConfigValuesLegacySignal(OAIRemoteConfig summary);
    void getPdpConfigValuesSignal(OAIRemoteConfig summary);
    void listPdpConfigsSignal(QList<OAIPDPConfigRead> summary);
    void rotatePdpApiKeySignal(OAIPDPConfigRead summary);

    void getAuthenticatingPdpConfigValuesSignalFull(OAIHttpRequestWorker *worker, OAIRemoteConfig summary);
    void getAuthenticatingPdpConfigValuesLegacySignalFull(OAIHttpRequestWorker *worker, OAIRemoteConfig summary);
    void getPdpConfigValuesSignalFull(OAIHttpRequestWorker *worker, OAIRemoteConfig summary);
    void listPdpConfigsSignalFull(OAIHttpRequestWorker *worker, QList<OAIPDPConfigRead> summary);
    void rotatePdpApiKeySignalFull(OAIHttpRequestWorker *worker, OAIPDPConfigRead summary);

    void getAuthenticatingPdpConfigValuesSignalE(OAIRemoteConfig summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getAuthenticatingPdpConfigValuesLegacySignalE(OAIRemoteConfig summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getPdpConfigValuesSignalE(OAIRemoteConfig summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listPdpConfigsSignalE(QList<OAIPDPConfigRead> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void rotatePdpApiKeySignalE(OAIPDPConfigRead summary, QNetworkReply::NetworkError error_type, QString error_str);

    void getAuthenticatingPdpConfigValuesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getAuthenticatingPdpConfigValuesLegacySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getPdpConfigValuesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listPdpConfigsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void rotatePdpApiKeySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
