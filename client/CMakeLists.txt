cmake_minimum_required(VERSION 3.2)

project(client)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

if (MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
else ()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -Wall -Wno-unused-variable")
endif ()

find_package(Qt5Core REQUIRED)
find_package(Qt5Network REQUIRED)
find_package(Qt5Gui REQUIRED)

add_library(${PROJECT_NAME}
    OAIAPIKeyCreate.cpp
    OAIAPIKeyOwnerType.cpp
    OAIAPIKeyRead.cpp
    OAIAPIKeyScopeRead.cpp
    OAIActionBlockEditable.cpp
    OAIActionBlockRead.cpp
    OAIActionObject.cpp
    OAIActor.cpp
    OAIAddRolePermissions.cpp
    OAIAttributeBlockEditable.cpp
    OAIAttributeBlockRead.cpp
    OAIAttributeType.cpp
    OAIAttributes.cpp
    OAIAuditLog.cpp
    OAIAuditLogObjects.cpp
    OAIAuthnMeAPIKeyRead.cpp
    OAIAuthnMeMemberRead.cpp
    OAIAuthnMeRead.cpp
    OAIAuthnMeUserRead.cpp
    OAIConditionSetCreate.cpp
    OAIConditionSetRead.cpp
    OAIConditionSetRuleCreate.cpp
    OAIConditionSetRuleRead.cpp
    OAIConditionSetRuleRemove.cpp
    OAIConditionSetType.cpp
    OAIConditionSetUpdate.cpp
    OAIDataSourceConfig.cpp
    OAIDataSourceEntry.cpp
    OAIDetailedAuditLog.cpp
    OAIDevLogin.cpp
    OAIDummyEngineModel.cpp
    OAIElementsConfigCreate.cpp
    OAIElementsConfigRead.cpp
    OAIElementsConfigRuntimeRead.cpp
    OAIElementsConfigUpdate.cpp
    OAIElementsEnvTypeRead.cpp
    OAIElementsEnvTypeUpdate.cpp
    OAIElementsPermissionLevel.cpp
    OAIElementsRoleRead.cpp
    OAIElementsType.cpp
    OAIElementsUserCreate.cpp
    OAIElementsUserRoleCreate.cpp
    OAIElementsUserRoleRemove.cpp
    OAIEmbeddedLoginRequestOutput.cpp
    OAIEngine.cpp
    OAIEnvironmentCreate.cpp
    OAIEnvironmentObject.cpp
    OAIEnvironmentRead.cpp
    OAIEnvironmentStats.cpp
    OAIEnvironmentUpdate.cpp
    OAIEnvironment_Object.cpp
    OAIFailedInvite.cpp
    OAIFullData.cpp
    OAIHTTPValidationError.cpp
    OAIIdentityRead.cpp
    OAIInviteAttemptResult.cpp
    OAIInviteCreate.cpp
    OAIInviteRead.cpp
    OAIInviteStatus.cpp
    OAILabels.cpp
    OAILanguageInstructions.cpp
    OAILocation_inner.cpp
    OAILoginResult.cpp
    OAIMemberAccessLevel.cpp
    OAIMemberAccessObj.cpp
    OAIMultiInviteResult.cpp
    OAIOPADecisionLog.cpp
    OAIOPAEngineDecisionLog.cpp
    OAIOPALClient.cpp
    OAIOPALabels.cpp
    OAIOPAMetrics.cpp
    OAIOnboardingStep.cpp
    OAIOrgMemberRead.cpp
    OAIOrgMemberUpdate.cpp
    OAIOrganizationCreate.cpp
    OAIOrganizationObject.cpp
    OAIOrganizationRead.cpp
    OAIOrganizationReadWithAPIKey.cpp
    OAIOrganizationUpdate.cpp
    OAIOrganization_Object.cpp
    OAIPDPConfigObject.cpp
    OAIPDPConfigRead.cpp
    OAIPDPContext.cpp
    OAIPDPState.cpp
    OAIPDPStateUpdate.cpp
    OAIPaginatedResult_APIKeyRead_.cpp
    OAIPaginatedResult_AuditLog_.cpp
    OAIPaginatedResult_ElementsConfigRead_.cpp
    OAIPaginatedResult_OPADecisionLog_.cpp
    OAIPaginatedResult_UserRead_.cpp
    OAIPdp.cpp
    OAIPdpValues.cpp
    OAIPdp_Config_Object.cpp
    OAIPermissionLevelRoleRead.cpp
    OAIPolicyRepoCreate.cpp
    OAIPolicyRepoRead.cpp
    OAIPolicyRepoStatus.cpp
    OAIProgrammingLanguage.cpp
    OAIProjectCreate.cpp
    OAIProjectObject.cpp
    OAIProjectRead.cpp
    OAIProjectUpdate.cpp
    OAIProject_Object.cpp
    OAIRaw_Data.cpp
    OAIRelationshipTupleObject.cpp
    OAIRemoteConfig.cpp
    OAIRemoveRolePermissions.cpp
    OAIResourceActionCreate.cpp
    OAIResourceActionRead.cpp
    OAIResourceActionUpdate.cpp
    OAIResourceAttributeCreate.cpp
    OAIResourceAttributeRead.cpp
    OAIResourceAttributeUpdate.cpp
    OAIResourceAttributes.cpp
    OAIResourceCreate.cpp
    OAIResourceInstanceCreate.cpp
    OAIResourceInstanceRead.cpp
    OAIResourceInstanceUpdate.cpp
    OAIResourceRead.cpp
    OAIResourceReplace.cpp
    OAIResourceRoleCreate.cpp
    OAIResourceRoleRead.cpp
    OAIResourceRoleUpdate.cpp
    OAIResourceTypeObject.cpp
    OAIResourceUpdate.cpp
    OAIResource_Id.cpp
    OAIRoleAssignmentCreate.cpp
    OAIRoleAssignmentRead.cpp
    OAIRoleAssignmentRemove.cpp
    OAIRoleBlock.cpp
    OAIRoleCreate.cpp
    OAIRoleData.cpp
    OAIRoleRead.cpp
    OAIRoleUpdate.cpp
    OAISSHAuthData.cpp
    OAISettings.cpp
    OAIStatistics.cpp
    OAITenantCreate.cpp
    OAITenantObject.cpp
    OAITenantRead.cpp
    OAITenantUpdate.cpp
    OAIUserCreate.cpp
    OAIUserData.cpp
    OAIUserLoginRequestInput.cpp
    OAIUserObject.cpp
    OAIUserRead.cpp
    OAIUserRole.cpp
    OAIUserRoleCreate.cpp
    OAIUserRoleRemove.cpp
    OAIUserUpdate.cpp
    OAIValidationError.cpp
    OAIWebhookCreate.cpp
    OAIWebhookRead.cpp
    OAIWebhookUpdate.cpp
    OAIAPIKeysApi.cpp
    OAIAuditElementsDataApi.cpp
    OAIAuditLogsApi.cpp
    OAIAuthenticationApi.cpp
    OAIConditionSetRulesApi.cpp
    OAIConditionSetsApi.cpp
    OAIDecisionLogsApi.cpp
    OAIDecisionLogsIngressApi.cpp
    OAIDefaultApi.cpp
    OAIElementsConfigsApi.cpp
    OAIEnvironmentsApi.cpp
    OAIInstructionsApi.cpp
    OAIMembersApi.cpp
    OAIOPALDataApi.cpp
    OAIOrganizationsApi.cpp
    OAIPolicyApi.cpp
    OAIPolicyDecisionPointsApi.cpp
    OAIPolicyGitRepositoriesApi.cpp
    OAIProjectsApi.cpp
    OAIResourceActionsApi.cpp
    OAIResourceAttributesApi.cpp
    OAIResourceInstancesApi.cpp
    OAIResourceRolesApi.cpp
    OAIResourcesApi.cpp
    OAIRoleAssignmentsApi.cpp
    OAIRolesApi.cpp
    OAITenantsApi.cpp
    OAIUserAttributesApi.cpp
    OAIUsersApi.cpp
    OAIUsersElementsDataApi.cpp
    OAIHelpers.cpp
    OAIHttpRequest.cpp
    OAIHttpFileElement.cpp
    OAIOauth.cpp
)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Core Qt5::Network Qt5::Gui)
if(NOT APPLE)
  find_package(OpenSSL REQUIRED)
  target_link_libraries(${PROJECT_NAME} PRIVATE ssl crypto)
endif()

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 14)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_EXTENSIONS OFF)

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION bin LIBRARY DESTINATION lib ARCHIVE DESTINATION lib)
