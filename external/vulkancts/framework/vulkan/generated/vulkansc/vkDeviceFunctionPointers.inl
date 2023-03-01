/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 * This file was generated by /scripts/gen_framework.py
 */

GetDeviceProcAddrFunc						getDeviceProcAddr;
DestroyDeviceFunc							destroyDevice;
GetDeviceQueueFunc							getDeviceQueue;
QueueSubmitFunc								queueSubmit;
QueueWaitIdleFunc							queueWaitIdle;
DeviceWaitIdleFunc							deviceWaitIdle;
AllocateMemoryFunc							allocateMemory;
MapMemoryFunc								mapMemory;
UnmapMemoryFunc								unmapMemory;
FlushMappedMemoryRangesFunc					flushMappedMemoryRanges;
InvalidateMappedMemoryRangesFunc			invalidateMappedMemoryRanges;
GetDeviceMemoryCommitmentFunc				getDeviceMemoryCommitment;
GetBufferMemoryRequirementsFunc				getBufferMemoryRequirements;
BindBufferMemoryFunc						bindBufferMemory;
GetImageMemoryRequirementsFunc				getImageMemoryRequirements;
BindImageMemoryFunc							bindImageMemory;
CreateFenceFunc								createFence;
DestroyFenceFunc							destroyFence;
ResetFencesFunc								resetFences;
GetFenceStatusFunc							getFenceStatus;
WaitForFencesFunc							waitForFences;
CreateSemaphoreFunc							createSemaphore;
DestroySemaphoreFunc						destroySemaphore;
CreateEventFunc								createEvent;
DestroyEventFunc							destroyEvent;
GetEventStatusFunc							getEventStatus;
SetEventFunc								setEvent;
ResetEventFunc								resetEvent;
CreateQueryPoolFunc							createQueryPool;
GetQueryPoolResultsFunc						getQueryPoolResults;
ResetQueryPoolFunc							resetQueryPool;
CreateBufferFunc							createBuffer;
DestroyBufferFunc							destroyBuffer;
CreateBufferViewFunc						createBufferView;
DestroyBufferViewFunc						destroyBufferView;
CreateImageFunc								createImage;
DestroyImageFunc							destroyImage;
GetImageSubresourceLayoutFunc				getImageSubresourceLayout;
CreateImageViewFunc							createImageView;
DestroyImageViewFunc						destroyImageView;
CreatePipelineCacheFunc						createPipelineCache;
DestroyPipelineCacheFunc					destroyPipelineCache;
CreateGraphicsPipelinesFunc					createGraphicsPipelines;
CreateComputePipelinesFunc					createComputePipelines;
DestroyPipelineFunc							destroyPipeline;
CreatePipelineLayoutFunc					createPipelineLayout;
DestroyPipelineLayoutFunc					destroyPipelineLayout;
CreateSamplerFunc							createSampler;
DestroySamplerFunc							destroySampler;
CreateDescriptorSetLayoutFunc				createDescriptorSetLayout;
DestroyDescriptorSetLayoutFunc				destroyDescriptorSetLayout;
CreateDescriptorPoolFunc					createDescriptorPool;
ResetDescriptorPoolFunc						resetDescriptorPool;
AllocateDescriptorSetsFunc					allocateDescriptorSets;
FreeDescriptorSetsFunc						freeDescriptorSets;
UpdateDescriptorSetsFunc					updateDescriptorSets;
CreateFramebufferFunc						createFramebuffer;
DestroyFramebufferFunc						destroyFramebuffer;
CreateRenderPassFunc						createRenderPass;
DestroyRenderPassFunc						destroyRenderPass;
GetRenderAreaGranularityFunc				getRenderAreaGranularity;
CreateCommandPoolFunc						createCommandPool;
ResetCommandPoolFunc						resetCommandPool;
AllocateCommandBuffersFunc					allocateCommandBuffers;
FreeCommandBuffersFunc						freeCommandBuffers;
BeginCommandBufferFunc						beginCommandBuffer;
EndCommandBufferFunc						endCommandBuffer;
ResetCommandBufferFunc						resetCommandBuffer;
CmdBindPipelineFunc							cmdBindPipeline;
CmdSetViewportFunc							cmdSetViewport;
CmdSetScissorFunc							cmdSetScissor;
CmdSetLineWidthFunc							cmdSetLineWidth;
CmdSetDepthBiasFunc							cmdSetDepthBias;
CmdSetBlendConstantsFunc					cmdSetBlendConstants;
CmdSetDepthBoundsFunc						cmdSetDepthBounds;
CmdSetStencilCompareMaskFunc				cmdSetStencilCompareMask;
CmdSetStencilWriteMaskFunc					cmdSetStencilWriteMask;
CmdSetStencilReferenceFunc					cmdSetStencilReference;
CmdBindDescriptorSetsFunc					cmdBindDescriptorSets;
CmdBindIndexBufferFunc						cmdBindIndexBuffer;
CmdBindVertexBuffersFunc					cmdBindVertexBuffers;
CmdDrawFunc									cmdDraw;
CmdDrawIndexedFunc							cmdDrawIndexed;
CmdDrawIndirectFunc							cmdDrawIndirect;
CmdDrawIndexedIndirectFunc					cmdDrawIndexedIndirect;
CmdDispatchFunc								cmdDispatch;
CmdDispatchIndirectFunc						cmdDispatchIndirect;
CmdCopyBufferFunc							cmdCopyBuffer;
CmdCopyImageFunc							cmdCopyImage;
CmdBlitImageFunc							cmdBlitImage;
CmdCopyBufferToImageFunc					cmdCopyBufferToImage;
CmdCopyImageToBufferFunc					cmdCopyImageToBuffer;
CmdUpdateBufferFunc							cmdUpdateBuffer;
CmdFillBufferFunc							cmdFillBuffer;
CmdClearColorImageFunc						cmdClearColorImage;
CmdClearDepthStencilImageFunc				cmdClearDepthStencilImage;
CmdClearAttachmentsFunc						cmdClearAttachments;
CmdResolveImageFunc							cmdResolveImage;
CmdSetEventFunc								cmdSetEvent;
CmdResetEventFunc							cmdResetEvent;
CmdWaitEventsFunc							cmdWaitEvents;
CmdPipelineBarrierFunc						cmdPipelineBarrier;
CmdBeginQueryFunc							cmdBeginQuery;
CmdEndQueryFunc								cmdEndQuery;
CmdResetQueryPoolFunc						cmdResetQueryPool;
CmdWriteTimestampFunc						cmdWriteTimestamp;
CmdCopyQueryPoolResultsFunc					cmdCopyQueryPoolResults;
CmdPushConstantsFunc						cmdPushConstants;
CmdBeginRenderPassFunc						cmdBeginRenderPass;
CmdNextSubpassFunc							cmdNextSubpass;
CmdEndRenderPassFunc						cmdEndRenderPass;
CmdExecuteCommandsFunc						cmdExecuteCommands;
CreateSharedSwapchainsKHRFunc				createSharedSwapchainsKHR;
CreateSwapchainKHRFunc						createSwapchainKHR;
GetSwapchainImagesKHRFunc					getSwapchainImagesKHR;
AcquireNextImageKHRFunc						acquireNextImageKHR;
QueuePresentKHRFunc							queuePresentKHR;
GetMemoryFdKHRFunc							getMemoryFdKHR;
GetMemoryFdPropertiesKHRFunc				getMemoryFdPropertiesKHR;
GetMemorySciBufNVFunc						getMemorySciBufNV;
GetSemaphoreFdKHRFunc						getSemaphoreFdKHR;
ImportSemaphoreFdKHRFunc					importSemaphoreFdKHR;
GetFenceFdKHRFunc							getFenceFdKHR;
ImportFenceFdKHRFunc						importFenceFdKHR;
GetFenceSciSyncFenceNVFunc					getFenceSciSyncFenceNV;
GetFenceSciSyncObjNVFunc					getFenceSciSyncObjNV;
ImportFenceSciSyncFenceNVFunc				importFenceSciSyncFenceNV;
ImportFenceSciSyncObjNVFunc					importFenceSciSyncObjNV;
GetSemaphoreSciSyncObjNVFunc				getSemaphoreSciSyncObjNV;
ImportSemaphoreSciSyncObjNVFunc				importSemaphoreSciSyncObjNV;
CreateSemaphoreSciSyncPoolNVFunc			createSemaphoreSciSyncPoolNV;
DisplayPowerControlEXTFunc					displayPowerControlEXT;
RegisterDeviceEventEXTFunc					registerDeviceEventEXT;
RegisterDisplayEventEXTFunc					registerDisplayEventEXT;
GetSwapchainCounterEXTFunc					getSwapchainCounterEXT;
GetDeviceGroupPeerMemoryFeaturesFunc		getDeviceGroupPeerMemoryFeatures;
BindBufferMemory2Func						bindBufferMemory2;
BindImageMemory2Func						bindImageMemory2;
CmdSetDeviceMaskFunc						cmdSetDeviceMask;
GetDeviceGroupPresentCapabilitiesKHRFunc	getDeviceGroupPresentCapabilitiesKHR;
GetDeviceGroupSurfacePresentModesKHRFunc	getDeviceGroupSurfacePresentModesKHR;
AcquireNextImage2KHRFunc					acquireNextImage2KHR;
CmdDispatchBaseFunc							cmdDispatchBase;
SetHdrMetadataEXTFunc						setHdrMetadataEXT;
GetSwapchainStatusKHRFunc					getSwapchainStatusKHR;
CmdSetDiscardRectangleEXTFunc				cmdSetDiscardRectangleEXT;
CmdSetDiscardRectangleEnableEXTFunc			cmdSetDiscardRectangleEnableEXT;
CmdSetDiscardRectangleModeEXTFunc			cmdSetDiscardRectangleModeEXT;
CmdSetSampleLocationsEXTFunc				cmdSetSampleLocationsEXT;
GetBufferMemoryRequirements2Func			getBufferMemoryRequirements2;
GetImageMemoryRequirements2Func				getImageMemoryRequirements2;
CreateSamplerYcbcrConversionFunc			createSamplerYcbcrConversion;
DestroySamplerYcbcrConversionFunc			destroySamplerYcbcrConversion;
GetDeviceQueue2Func							getDeviceQueue2;
GetDescriptorSetLayoutSupportFunc			getDescriptorSetLayoutSupport;
GetCalibratedTimestampsEXTFunc				getCalibratedTimestampsEXT;
SetDebugUtilsObjectNameEXTFunc				setDebugUtilsObjectNameEXT;
SetDebugUtilsObjectTagEXTFunc				setDebugUtilsObjectTagEXT;
QueueBeginDebugUtilsLabelEXTFunc			queueBeginDebugUtilsLabelEXT;
QueueEndDebugUtilsLabelEXTFunc				queueEndDebugUtilsLabelEXT;
QueueInsertDebugUtilsLabelEXTFunc			queueInsertDebugUtilsLabelEXT;
CmdBeginDebugUtilsLabelEXTFunc				cmdBeginDebugUtilsLabelEXT;
CmdEndDebugUtilsLabelEXTFunc				cmdEndDebugUtilsLabelEXT;
CmdInsertDebugUtilsLabelEXTFunc				cmdInsertDebugUtilsLabelEXT;
GetMemoryHostPointerPropertiesEXTFunc		getMemoryHostPointerPropertiesEXT;
CreateRenderPass2Func						createRenderPass2;
CmdBeginRenderPass2Func						cmdBeginRenderPass2;
CmdNextSubpass2Func							cmdNextSubpass2;
CmdEndRenderPass2Func						cmdEndRenderPass2;
GetSemaphoreCounterValueFunc				getSemaphoreCounterValue;
WaitSemaphoresFunc							waitSemaphores;
SignalSemaphoreFunc							signalSemaphore;
CmdDrawIndirectCountFunc					cmdDrawIndirectCount;
CmdDrawIndexedIndirectCountFunc				cmdDrawIndexedIndirectCount;
CmdSetCheckpointNVFunc						cmdSetCheckpointNV;
GetQueueCheckpointDataNVFunc				getQueueCheckpointDataNV;
AcquireProfilingLockKHRFunc					acquireProfilingLockKHR;
ReleaseProfilingLockKHRFunc					releaseProfilingLockKHR;
GetImageDrmFormatModifierPropertiesEXTFunc	getImageDrmFormatModifierPropertiesEXT;
GetBufferOpaqueCaptureAddressFunc			getBufferOpaqueCaptureAddress;
GetBufferDeviceAddressFunc					getBufferDeviceAddress;
GetDeviceMemoryOpaqueCaptureAddressFunc		getDeviceMemoryOpaqueCaptureAddress;
CmdSetLineStippleEXTFunc					cmdSetLineStippleEXT;
GetFaultDataFunc							getFaultData;
CmdSetCullModeEXTFunc						cmdSetCullModeEXT;
CmdSetFrontFaceEXTFunc						cmdSetFrontFaceEXT;
CmdSetPrimitiveTopologyEXTFunc				cmdSetPrimitiveTopologyEXT;
CmdSetViewportWithCountEXTFunc				cmdSetViewportWithCountEXT;
CmdSetScissorWithCountEXTFunc				cmdSetScissorWithCountEXT;
CmdBindVertexBuffers2EXTFunc				cmdBindVertexBuffers2EXT;
CmdSetDepthTestEnableEXTFunc				cmdSetDepthTestEnableEXT;
CmdSetDepthWriteEnableEXTFunc				cmdSetDepthWriteEnableEXT;
CmdSetDepthCompareOpEXTFunc					cmdSetDepthCompareOpEXT;
CmdSetDepthBoundsTestEnableEXTFunc			cmdSetDepthBoundsTestEnableEXT;
CmdSetStencilTestEnableEXTFunc				cmdSetStencilTestEnableEXT;
CmdSetStencilOpEXTFunc						cmdSetStencilOpEXT;
CmdSetPatchControlPointsEXTFunc				cmdSetPatchControlPointsEXT;
CmdSetRasterizerDiscardEnableEXTFunc		cmdSetRasterizerDiscardEnableEXT;
CmdSetDepthBiasEnableEXTFunc				cmdSetDepthBiasEnableEXT;
CmdSetLogicOpEXTFunc						cmdSetLogicOpEXT;
CmdSetPrimitiveRestartEnableEXTFunc			cmdSetPrimitiveRestartEnableEXT;
CmdCopyBuffer2KHRFunc						cmdCopyBuffer2KHR;
CmdCopyImage2KHRFunc						cmdCopyImage2KHR;
CmdBlitImage2KHRFunc						cmdBlitImage2KHR;
CmdCopyBufferToImage2KHRFunc				cmdCopyBufferToImage2KHR;
CmdCopyImageToBuffer2KHRFunc				cmdCopyImageToBuffer2KHR;
CmdResolveImage2KHRFunc						cmdResolveImage2KHR;
CmdRefreshObjectsKHRFunc					cmdRefreshObjectsKHR;
CmdSetFragmentShadingRateKHRFunc			cmdSetFragmentShadingRateKHR;
CmdSetVertexInputEXTFunc					cmdSetVertexInputEXT;
CmdSetColorWriteEnableEXTFunc				cmdSetColorWriteEnableEXT;
CmdSetEvent2KHRFunc							cmdSetEvent2KHR;
CmdResetEvent2KHRFunc						cmdResetEvent2KHR;
CmdWaitEvents2KHRFunc						cmdWaitEvents2KHR;
CmdPipelineBarrier2KHRFunc					cmdPipelineBarrier2KHR;
QueueSubmit2KHRFunc							queueSubmit2KHR;
CmdWriteTimestamp2KHRFunc					cmdWriteTimestamp2KHR;
GetQueueCheckpointData2NVFunc				getQueueCheckpointData2NV;
GetCommandPoolMemoryConsumptionFunc			getCommandPoolMemoryConsumption;
GetScreenBufferPropertiesQNXFunc			getScreenBufferPropertiesQNX;
