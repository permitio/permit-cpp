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

#ifndef OAI_OAIOPALDataApi_H
#define OAI_OAIOPALDataApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIFullData.h"
#include "OAIHTTPValidationError.h"
#include "OAIRoleData.h"
#include "OAIUserData.h"
#include <QString>
#include <QList>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIOPALDataApi : public QObject {
    Q_OBJECT

public:
    OAIOPALDataApi(const int timeOut = 0);
    ~OAIOPALDataApi();

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
    * @param[in]  org_id QString [required]
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  __internal_update_cache bool [optional]
    */
    void getAllData(const QString &org_id, const QString &proj_id, const QString &env_id, const ::OpenAPI::OptionalParam<bool> &__internal_update_cache = ::OpenAPI::OptionalParam<bool>());

    /**
    * @param[in]  org_id QString [required]
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  role_id QString [required]
    */
    void getDataForRole(const QString &org_id, const QString &proj_id, const QString &env_id, const QString &role_id);

    /**
    * @param[in]  org_id QString [required]
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  user_set_id QString [required]
    * @param[in]  resource_set_id QString [required]
    */
    void getDataForSetRule(const QString &org_id, const QString &proj_id, const QString &env_id, const QString &user_set_id, const QString &resource_set_id);

    /**
    * @param[in]  org_id QString [required]
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  user_id QString [required]
    */
    void getDataForUser(const QString &org_id, const QString &proj_id, const QString &env_id, const QString &user_id);


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

    void getAllDataCallback(OAIHttpRequestWorker *worker);
    void getDataForRoleCallback(OAIHttpRequestWorker *worker);
    void getDataForSetRuleCallback(OAIHttpRequestWorker *worker);
    void getDataForUserCallback(OAIHttpRequestWorker *worker);

signals:

    void getAllDataSignal(OAIFullData summary);
    void getDataForRoleSignal(OAIRoleData summary);
    void getDataForSetRuleSignal(QMap<QString, QList<QString>> summary);
    void getDataForUserSignal(OAIUserData summary);

    void getAllDataSignalFull(OAIHttpRequestWorker *worker, OAIFullData summary);
    void getDataForRoleSignalFull(OAIHttpRequestWorker *worker, OAIRoleData summary);
    void getDataForSetRuleSignalFull(OAIHttpRequestWorker *worker, QMap<QString, QList<QString>> summary);
    void getDataForUserSignalFull(OAIHttpRequestWorker *worker, OAIUserData summary);

    void getAllDataSignalE(OAIFullData summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getDataForRoleSignalE(OAIRoleData summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getDataForSetRuleSignalE(QMap<QString, QList<QString>> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getDataForUserSignalE(OAIUserData summary, QNetworkReply::NetworkError error_type, QString error_str);

    void getAllDataSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getDataForRoleSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getDataForSetRuleSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getDataForUserSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
