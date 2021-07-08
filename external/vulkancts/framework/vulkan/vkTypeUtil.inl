/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 */

inline VkExtent2D makeExtent2D (uint32_t width, uint32_t height)
{
	VkExtent2D res;
	res.width	= width;
	res.height	= height;
	return res;
}

inline VkExtent3D makeExtent3D (uint32_t width, uint32_t height, uint32_t depth)
{
	VkExtent3D res;
	res.width	= width;
	res.height	= height;
	res.depth	= depth;
	return res;
}

inline VkOffset2D makeOffset2D (int32_t x, int32_t y)
{
	VkOffset2D res;
	res.x	= x;
	res.y	= y;
	return res;
}

inline VkOffset3D makeOffset3D (int32_t x, int32_t y, int32_t z)
{
	VkOffset3D res;
	res.x	= x;
	res.y	= y;
	res.z	= z;
	return res;
}

inline VkDispatchIndirectCommand makeDispatchIndirectCommand (uint32_t x, uint32_t y, uint32_t z)
{
	VkDispatchIndirectCommand res;
	res.x	= x;
	res.y	= y;
	res.z	= z;
	return res;
}

inline VkDrawIndexedIndirectCommand makeDrawIndexedIndirectCommand (uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance)
{
	VkDrawIndexedIndirectCommand res;
	res.indexCount		= indexCount;
	res.instanceCount	= instanceCount;
	res.firstIndex		= firstIndex;
	res.vertexOffset	= vertexOffset;
	res.firstInstance	= firstInstance;
	return res;
}

inline VkDrawIndirectCommand makeDrawIndirectCommand (uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance)
{
	VkDrawIndirectCommand res;
	res.vertexCount		= vertexCount;
	res.instanceCount	= instanceCount;
	res.firstVertex		= firstVertex;
	res.firstInstance	= firstInstance;
	return res;
}

inline VkImageSubresourceRange makeImageSubresourceRange (VkImageAspectFlags aspectMask, uint32_t baseMipLevel, uint32_t levelCount, uint32_t baseArrayLayer, uint32_t layerCount)
{
	VkImageSubresourceRange res;
	res.aspectMask		= aspectMask;
	res.baseMipLevel	= baseMipLevel;
	res.levelCount		= levelCount;
	res.baseArrayLayer	= baseArrayLayer;
	res.layerCount		= layerCount;
	return res;
}

inline VkAllocationCallbacks makeAllocationCallbacks (void* pUserData, PFN_vkAllocationFunction pfnAllocation, PFN_vkReallocationFunction pfnReallocation, PFN_vkFreeFunction pfnFree, PFN_vkInternalAllocationNotification pfnInternalAllocation, PFN_vkInternalFreeNotification pfnInternalFree)
{
	VkAllocationCallbacks res;
	res.pUserData				= pUserData;
	res.pfnAllocation			= pfnAllocation;
	res.pfnReallocation			= pfnReallocation;
	res.pfnFree					= pfnFree;
	res.pfnInternalAllocation	= pfnInternalAllocation;
	res.pfnInternalFree			= pfnInternalFree;
	return res;
}

inline VkMemoryRequirements makeMemoryRequirements (VkDeviceSize size, VkDeviceSize alignment, uint32_t memoryTypeBits)
{
	VkMemoryRequirements res;
	res.size			= size;
	res.alignment		= alignment;
	res.memoryTypeBits	= memoryTypeBits;
	return res;
}

inline VkSparseMemoryBind makeSparseMemoryBind (VkDeviceSize resourceOffset, VkDeviceSize size, VkDeviceMemory memory, VkDeviceSize memoryOffset, VkSparseMemoryBindFlags flags)
{
	VkSparseMemoryBind res;
	res.resourceOffset	= resourceOffset;
	res.size			= size;
	res.memory			= memory;
	res.memoryOffset	= memoryOffset;
	res.flags			= flags;
	return res;
}

inline VkSparseBufferMemoryBindInfo makeSparseBufferMemoryBindInfo (VkBuffer buffer, uint32_t bindCount, const VkSparseMemoryBind* pBinds)
{
	VkSparseBufferMemoryBindInfo res;
	res.buffer		= buffer;
	res.bindCount	= bindCount;
	res.pBinds		= pBinds;
	return res;
}

inline VkSparseImageOpaqueMemoryBindInfo makeSparseImageOpaqueMemoryBindInfo (VkImage image, uint32_t bindCount, const VkSparseMemoryBind* pBinds)
{
	VkSparseImageOpaqueMemoryBindInfo res;
	res.image		= image;
	res.bindCount	= bindCount;
	res.pBinds		= pBinds;
	return res;
}

inline VkImageSubresource makeImageSubresource (VkImageAspectFlags aspectMask, uint32_t mipLevel, uint32_t arrayLayer)
{
	VkImageSubresource res;
	res.aspectMask	= aspectMask;
	res.mipLevel	= mipLevel;
	res.arrayLayer	= arrayLayer;
	return res;
}

inline VkSparseImageMemoryBindInfo makeSparseImageMemoryBindInfo (VkImage image, uint32_t bindCount, const VkSparseImageMemoryBind* pBinds)
{
	VkSparseImageMemoryBindInfo res;
	res.image		= image;
	res.bindCount	= bindCount;
	res.pBinds		= pBinds;
	return res;
}

inline VkSubresourceLayout makeSubresourceLayout (VkDeviceSize offset, VkDeviceSize size, VkDeviceSize rowPitch, VkDeviceSize arrayPitch, VkDeviceSize depthPitch)
{
	VkSubresourceLayout res;
	res.offset		= offset;
	res.size		= size;
	res.rowPitch	= rowPitch;
	res.arrayPitch	= arrayPitch;
	res.depthPitch	= depthPitch;
	return res;
}

inline VkComponentMapping makeComponentMapping (VkComponentSwizzle r, VkComponentSwizzle g, VkComponentSwizzle b, VkComponentSwizzle a)
{
	VkComponentMapping res;
	res.r	= r;
	res.g	= g;
	res.b	= b;
	res.a	= a;
	return res;
}

inline VkSpecializationMapEntry makeSpecializationMapEntry (uint32_t constantID, uint32_t offset, deUintptr size)
{
	VkSpecializationMapEntry res;
	res.constantID	= constantID;
	res.offset		= offset;
	res.size		= size;
	return res;
}

inline VkSpecializationInfo makeSpecializationInfo (uint32_t mapEntryCount, const VkSpecializationMapEntry* pMapEntries, deUintptr dataSize, const void* pData)
{
	VkSpecializationInfo res;
	res.mapEntryCount	= mapEntryCount;
	res.pMapEntries		= pMapEntries;
	res.dataSize		= dataSize;
	res.pData			= pData;
	return res;
}

inline VkVertexInputBindingDescription makeVertexInputBindingDescription (uint32_t binding, uint32_t stride, VkVertexInputRate inputRate)
{
	VkVertexInputBindingDescription res;
	res.binding		= binding;
	res.stride		= stride;
	res.inputRate	= inputRate;
	return res;
}

inline VkVertexInputAttributeDescription makeVertexInputAttributeDescription (uint32_t location, uint32_t binding, VkFormat format, uint32_t offset)
{
	VkVertexInputAttributeDescription res;
	res.location	= location;
	res.binding		= binding;
	res.format		= format;
	res.offset		= offset;
	return res;
}

inline VkViewport makeViewport (float x, float y, float width, float height, float minDepth, float maxDepth)
{
	VkViewport res;
	res.x			= x;
	res.y			= y;
	res.width		= width;
	res.height		= height;
	res.minDepth	= minDepth;
	res.maxDepth	= maxDepth;
	return res;
}

inline VkStencilOpState makeStencilOpState (VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp, uint32_t compareMask, uint32_t writeMask, uint32_t reference)
{
	VkStencilOpState res;
	res.failOp		= failOp;
	res.passOp		= passOp;
	res.depthFailOp	= depthFailOp;
	res.compareOp	= compareOp;
	res.compareMask	= compareMask;
	res.writeMask	= writeMask;
	res.reference	= reference;
	return res;
}

inline VkPipelineColorBlendAttachmentState makePipelineColorBlendAttachmentState (VkBool32 blendEnable, VkBlendFactor srcColorBlendFactor, VkBlendFactor dstColorBlendFactor, VkBlendOp colorBlendOp, VkBlendFactor srcAlphaBlendFactor, VkBlendFactor dstAlphaBlendFactor, VkBlendOp alphaBlendOp, VkColorComponentFlags colorWriteMask)
{
	VkPipelineColorBlendAttachmentState res;
	res.blendEnable			= blendEnable;
	res.srcColorBlendFactor	= srcColorBlendFactor;
	res.dstColorBlendFactor	= dstColorBlendFactor;
	res.colorBlendOp		= colorBlendOp;
	res.srcAlphaBlendFactor	= srcAlphaBlendFactor;
	res.dstAlphaBlendFactor	= dstAlphaBlendFactor;
	res.alphaBlendOp		= alphaBlendOp;
	res.colorWriteMask		= colorWriteMask;
	return res;
}

inline VkPushConstantRange makePushConstantRange (VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size)
{
	VkPushConstantRange res;
	res.stageFlags	= stageFlags;
	res.offset		= offset;
	res.size		= size;
	return res;
}

inline VkDescriptorBufferInfo makeDescriptorBufferInfo (VkBuffer buffer, VkDeviceSize offset, VkDeviceSize range)
{
	VkDescriptorBufferInfo res;
	res.buffer	= buffer;
	res.offset	= offset;
	res.range	= range;
	return res;
}

inline VkDescriptorImageInfo makeDescriptorImageInfo (VkSampler sampler, VkImageView imageView, VkImageLayout imageLayout)
{
	VkDescriptorImageInfo res;
	res.sampler		= sampler;
	res.imageView	= imageView;
	res.imageLayout	= imageLayout;
	return res;
}

inline VkDescriptorPoolSize makeDescriptorPoolSize (VkDescriptorType type, uint32_t descriptorCount)
{
	VkDescriptorPoolSize res;
	res.type			= type;
	res.descriptorCount	= descriptorCount;
	return res;
}

inline VkDescriptorSetLayoutBinding makeDescriptorSetLayoutBinding (uint32_t binding, VkDescriptorType descriptorType, uint32_t descriptorCount, VkShaderStageFlags stageFlags, const VkSampler* pImmutableSamplers)
{
	VkDescriptorSetLayoutBinding res;
	res.binding				= binding;
	res.descriptorType		= descriptorType;
	res.descriptorCount		= descriptorCount;
	res.stageFlags			= stageFlags;
	res.pImmutableSamplers	= pImmutableSamplers;
	return res;
}

inline VkAttachmentDescription makeAttachmentDescription (VkAttachmentDescriptionFlags flags, VkFormat format, VkSampleCountFlagBits samples, VkAttachmentLoadOp loadOp, VkAttachmentStoreOp storeOp, VkAttachmentLoadOp stencilLoadOp, VkAttachmentStoreOp stencilStoreOp, VkImageLayout initialLayout, VkImageLayout finalLayout)
{
	VkAttachmentDescription res;
	res.flags			= flags;
	res.format			= format;
	res.samples			= samples;
	res.loadOp			= loadOp;
	res.storeOp			= storeOp;
	res.stencilLoadOp	= stencilLoadOp;
	res.stencilStoreOp	= stencilStoreOp;
	res.initialLayout	= initialLayout;
	res.finalLayout		= finalLayout;
	return res;
}

inline VkAttachmentReference makeAttachmentReference (uint32_t attachment, VkImageLayout layout)
{
	VkAttachmentReference res;
	res.attachment	= attachment;
	res.layout		= layout;
	return res;
}

inline VkSubpassDescription makeSubpassDescription (VkSubpassDescriptionFlags flags, VkPipelineBindPoint pipelineBindPoint, uint32_t inputAttachmentCount, const VkAttachmentReference* pInputAttachments, uint32_t colorAttachmentCount, const VkAttachmentReference* pColorAttachments, const VkAttachmentReference* pResolveAttachments, const VkAttachmentReference* pDepthStencilAttachment, uint32_t preserveAttachmentCount, const uint32_t* pPreserveAttachments)
{
	VkSubpassDescription res;
	res.flags					= flags;
	res.pipelineBindPoint		= pipelineBindPoint;
	res.inputAttachmentCount	= inputAttachmentCount;
	res.pInputAttachments		= pInputAttachments;
	res.colorAttachmentCount	= colorAttachmentCount;
	res.pColorAttachments		= pColorAttachments;
	res.pResolveAttachments		= pResolveAttachments;
	res.pDepthStencilAttachment	= pDepthStencilAttachment;
	res.preserveAttachmentCount	= preserveAttachmentCount;
	res.pPreserveAttachments	= pPreserveAttachments;
	return res;
}

inline VkSubpassDependency makeSubpassDependency (uint32_t srcSubpass, uint32_t dstSubpass, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkAccessFlags srcAccessMask, VkAccessFlags dstAccessMask, VkDependencyFlags dependencyFlags)
{
	VkSubpassDependency res;
	res.srcSubpass		= srcSubpass;
	res.dstSubpass		= dstSubpass;
	res.srcStageMask	= srcStageMask;
	res.dstStageMask	= dstStageMask;
	res.srcAccessMask	= srcAccessMask;
	res.dstAccessMask	= dstAccessMask;
	res.dependencyFlags	= dependencyFlags;
	return res;
}

inline VkBufferCopy makeBufferCopy (VkDeviceSize srcOffset, VkDeviceSize dstOffset, VkDeviceSize size)
{
	VkBufferCopy res;
	res.srcOffset	= srcOffset;
	res.dstOffset	= dstOffset;
	res.size		= size;
	return res;
}

inline VkImageSubresourceLayers makeImageSubresourceLayers (VkImageAspectFlags aspectMask, uint32_t mipLevel, uint32_t baseArrayLayer, uint32_t layerCount)
{
	VkImageSubresourceLayers res;
	res.aspectMask		= aspectMask;
	res.mipLevel		= mipLevel;
	res.baseArrayLayer	= baseArrayLayer;
	res.layerCount		= layerCount;
	return res;
}

inline VkClearDepthStencilValue makeClearDepthStencilValue (float depth, uint32_t stencil)
{
	VkClearDepthStencilValue res;
	res.depth	= depth;
	res.stencil	= stencil;
	return res;
}

inline VkInputAttachmentAspectReference makeInputAttachmentAspectReference (uint32_t subpass, uint32_t inputAttachmentIndex, VkImageAspectFlags aspectMask)
{
	VkInputAttachmentAspectReference res;
	res.subpass					= subpass;
	res.inputAttachmentIndex	= inputAttachmentIndex;
	res.aspectMask				= aspectMask;
	return res;
}

inline VkDescriptorUpdateTemplateEntry makeDescriptorUpdateTemplateEntry (uint32_t dstBinding, uint32_t dstArrayElement, uint32_t descriptorCount, VkDescriptorType descriptorType, deUintptr offset, deUintptr stride)
{
	VkDescriptorUpdateTemplateEntry res;
	res.dstBinding		= dstBinding;
	res.dstArrayElement	= dstArrayElement;
	res.descriptorCount	= descriptorCount;
	res.descriptorType	= descriptorType;
	res.offset			= offset;
	res.stride			= stride;
	return res;
}

inline VkExternalMemoryProperties makeExternalMemoryProperties (VkExternalMemoryFeatureFlags externalMemoryFeatures, VkExternalMemoryHandleTypeFlags exportFromImportedHandleTypes, VkExternalMemoryHandleTypeFlags compatibleHandleTypes)
{
	VkExternalMemoryProperties res;
	res.externalMemoryFeatures			= externalMemoryFeatures;
	res.exportFromImportedHandleTypes	= exportFromImportedHandleTypes;
	res.compatibleHandleTypes			= compatibleHandleTypes;
	return res;
}

inline VkConformanceVersion makeConformanceVersion (deUint8 major, deUint8 minor, deUint8 subminor, deUint8 patch)
{
	VkConformanceVersion res;
	res.major		= major;
	res.minor		= minor;
	res.subminor	= subminor;
	res.patch		= patch;
	return res;
}

inline VkSurfaceFormatKHR makeSurfaceFormatKHR (VkFormat format, VkColorSpaceKHR colorSpace)
{
	VkSurfaceFormatKHR res;
	res.format		= format;
	res.colorSpace	= colorSpace;
	return res;
}

inline VkDisplayPlanePropertiesKHR makeDisplayPlanePropertiesKHR (VkDisplayKHR currentDisplay, uint32_t currentStackIndex)
{
	VkDisplayPlanePropertiesKHR res;
	res.currentDisplay		= currentDisplay;
	res.currentStackIndex	= currentStackIndex;
	return res;
}

inline VkPresentRegionKHR makePresentRegionKHR (uint32_t rectangleCount, const VkRectLayerKHR* pRectangles)
{
	VkPresentRegionKHR res;
	res.rectangleCount	= rectangleCount;
	res.pRectangles		= pRectangles;
	return res;
}

inline VkShaderResourceUsageAMD makeShaderResourceUsageAMD (uint32_t numUsedVgprs, uint32_t numUsedSgprs, uint32_t ldsSizePerLocalWorkGroup, deUintptr ldsUsageSizeInBytes, deUintptr scratchMemUsageInBytes)
{
	VkShaderResourceUsageAMD res;
	res.numUsedVgprs				= numUsedVgprs;
	res.numUsedSgprs				= numUsedSgprs;
	res.ldsSizePerLocalWorkGroup	= ldsSizePerLocalWorkGroup;
	res.ldsUsageSizeInBytes			= ldsUsageSizeInBytes;
	res.scratchMemUsageInBytes		= scratchMemUsageInBytes;
	return res;
}

inline VkViewportWScalingNV makeViewportWScalingNV (float xcoeff, float ycoeff)
{
	VkViewportWScalingNV res;
	res.xcoeff	= xcoeff;
	res.ycoeff	= ycoeff;
	return res;
}

inline VkRefreshCycleDurationGOOGLE makeRefreshCycleDurationGOOGLE (deUint64 refreshDuration)
{
	VkRefreshCycleDurationGOOGLE res;
	res.refreshDuration	= refreshDuration;
	return res;
}

inline VkPastPresentationTimingGOOGLE makePastPresentationTimingGOOGLE (uint32_t presentID, deUint64 desiredPresentTime, deUint64 actualPresentTime, deUint64 earliestPresentTime, deUint64 presentMargin)
{
	VkPastPresentationTimingGOOGLE res;
	res.presentID			= presentID;
	res.desiredPresentTime	= desiredPresentTime;
	res.actualPresentTime	= actualPresentTime;
	res.earliestPresentTime	= earliestPresentTime;
	res.presentMargin		= presentMargin;
	return res;
}

inline VkPresentTimeGOOGLE makePresentTimeGOOGLE (uint32_t presentID, deUint64 desiredPresentTime)
{
	VkPresentTimeGOOGLE res;
	res.presentID			= presentID;
	res.desiredPresentTime	= desiredPresentTime;
	return res;
}

inline VkViewportSwizzleNV makeViewportSwizzleNV (VkViewportCoordinateSwizzleNV x, VkViewportCoordinateSwizzleNV y, VkViewportCoordinateSwizzleNV z, VkViewportCoordinateSwizzleNV w)
{
	VkViewportSwizzleNV res;
	res.x	= x;
	res.y	= y;
	res.z	= z;
	res.w	= w;
	return res;
}

inline VkXYColorEXT makeXYColorEXT (float x, float y)
{
	VkXYColorEXT res;
	res.x	= x;
	res.y	= y;
	return res;
}

inline VkSampleLocationEXT makeSampleLocationEXT (float x, float y)
{
	VkSampleLocationEXT res;
	res.x	= x;
	res.y	= y;
	return res;
}

inline VkDrmFormatModifierPropertiesEXT makeDrmFormatModifierPropertiesEXT (deUint64 drmFormatModifier, uint32_t drmFormatModifierPlaneCount, VkFormatFeatureFlags drmFormatModifierTilingFeatures)
{
	VkDrmFormatModifierPropertiesEXT res;
	res.drmFormatModifier				= drmFormatModifier;
	res.drmFormatModifierPlaneCount		= drmFormatModifierPlaneCount;
	res.drmFormatModifierTilingFeatures	= drmFormatModifierTilingFeatures;
	return res;
}

inline VkShadingRatePaletteNV makeShadingRatePaletteNV (uint32_t shadingRatePaletteEntryCount, const VkShadingRatePaletteEntryNV* pShadingRatePaletteEntries)
{
	VkShadingRatePaletteNV res;
	res.shadingRatePaletteEntryCount	= shadingRatePaletteEntryCount;
	res.pShadingRatePaletteEntries		= pShadingRatePaletteEntries;
	return res;
}

inline VkCoarseSampleLocationNV makeCoarseSampleLocationNV (uint32_t pixelX, uint32_t pixelY, uint32_t sample)
{
	VkCoarseSampleLocationNV res;
	res.pixelX	= pixelX;
	res.pixelY	= pixelY;
	res.sample	= sample;
	return res;
}

inline VkCoarseSampleOrderCustomNV makeCoarseSampleOrderCustomNV (VkShadingRatePaletteEntryNV shadingRate, uint32_t sampleCount, uint32_t sampleLocationCount, const VkCoarseSampleLocationNV* pSampleLocations)
{
	VkCoarseSampleOrderCustomNV res;
	res.shadingRate			= shadingRate;
	res.sampleCount			= sampleCount;
	res.sampleLocationCount	= sampleLocationCount;
	res.pSampleLocations	= pSampleLocations;
	return res;
}

inline VkAabbPositionsKHR makeAabbPositionsKHR (float minX, float minY, float minZ, float maxX, float maxY, float maxZ)
{
	VkAabbPositionsKHR res;
	res.minX	= minX;
	res.minY	= minY;
	res.minZ	= minZ;
	res.maxX	= maxX;
	res.maxY	= maxY;
	res.maxZ	= maxZ;
	return res;
}

inline VkVertexInputBindingDivisorDescriptionEXT makeVertexInputBindingDivisorDescriptionEXT (uint32_t binding, uint32_t divisor)
{
	VkVertexInputBindingDivisorDescriptionEXT res;
	res.binding	= binding;
	res.divisor	= divisor;
	return res;
}

inline VkPipelineCreationFeedbackEXT makePipelineCreationFeedbackEXT (VkPipelineCreationFeedbackFlagsEXT flags, deUint64 duration)
{
	VkPipelineCreationFeedbackEXT res;
	res.flags		= flags;
	res.duration	= duration;
	return res;
}

inline VkDrawMeshTasksIndirectCommandNV makeDrawMeshTasksIndirectCommandNV (uint32_t taskCount, uint32_t firstTask)
{
	VkDrawMeshTasksIndirectCommandNV res;
	res.taskCount	= taskCount;
	res.firstTask	= firstTask;
	return res;
}

inline VkBindShaderGroupIndirectCommandNV makeBindShaderGroupIndirectCommandNV (uint32_t groupIndex)
{
	VkBindShaderGroupIndirectCommandNV res;
	res.groupIndex	= groupIndex;
	return res;
}

inline VkBindIndexBufferIndirectCommandNV makeBindIndexBufferIndirectCommandNV (VkDeviceAddress bufferAddress, uint32_t size, VkIndexType indexType)
{
	VkBindIndexBufferIndirectCommandNV res;
	res.bufferAddress	= bufferAddress;
	res.size			= size;
	res.indexType		= indexType;
	return res;
}

inline VkBindVertexBufferIndirectCommandNV makeBindVertexBufferIndirectCommandNV (VkDeviceAddress bufferAddress, uint32_t size, uint32_t stride)
{
	VkBindVertexBufferIndirectCommandNV res;
	res.bufferAddress	= bufferAddress;
	res.size			= size;
	res.stride			= stride;
	return res;
}

inline VkSetStateFlagsIndirectCommandNV makeSetStateFlagsIndirectCommandNV (uint32_t data)
{
	VkSetStateFlagsIndirectCommandNV res;
	res.data	= data;
	return res;
}

inline VkIndirectCommandsStreamNV makeIndirectCommandsStreamNV (VkBuffer buffer, VkDeviceSize offset)
{
	VkIndirectCommandsStreamNV res;
	res.buffer	= buffer;
	res.offset	= offset;
	return res;
}

inline VkSRTDataNV makeSRTDataNV (float sx, float a, float b, float pvx, float sy, float c, float pvy, float sz, float pvz, float qx, float qy, float qz, float qw, float tx, float ty, float tz)
{
	VkSRTDataNV res;
	res.sx	= sx;
	res.a	= a;
	res.b	= b;
	res.pvx	= pvx;
	res.sy	= sy;
	res.c	= c;
	res.pvy	= pvy;
	res.sz	= sz;
	res.pvz	= pvz;
	res.qx	= qx;
	res.qy	= qy;
	res.qz	= qz;
	res.qw	= qw;
	res.tx	= tx;
	res.ty	= ty;
	res.tz	= tz;
	return res;
}

inline VkMutableDescriptorTypeListVALVE makeMutableDescriptorTypeListVALVE (uint32_t descriptorTypeCount, const VkDescriptorType* pDescriptorTypes)
{
	VkMutableDescriptorTypeListVALVE res;
	res.descriptorTypeCount	= descriptorTypeCount;
	res.pDescriptorTypes	= pDescriptorTypes;
	return res;
}

inline VkMultiDrawInfoEXT makeMultiDrawInfoEXT (uint32_t firstVertex, uint32_t vertexCount)
{
	VkMultiDrawInfoEXT res;
	res.firstVertex	= firstVertex;
	res.vertexCount	= vertexCount;
	return res;
}

inline VkMultiDrawIndexedInfoEXT makeMultiDrawIndexedInfoEXT (uint32_t firstIndex, uint32_t indexCount, int32_t vertexOffset)
{
	VkMultiDrawIndexedInfoEXT res;
	res.firstIndex		= firstIndex;
	res.indexCount		= indexCount;
	res.vertexOffset	= vertexOffset;
	return res;
}

inline VkAccelerationStructureBuildRangeInfoKHR makeAccelerationStructureBuildRangeInfoKHR (uint32_t primitiveCount, uint32_t primitiveOffset, uint32_t firstVertex, uint32_t transformOffset)
{
	VkAccelerationStructureBuildRangeInfoKHR res;
	res.primitiveCount	= primitiveCount;
	res.primitiveOffset	= primitiveOffset;
	res.firstVertex		= firstVertex;
	res.transformOffset	= transformOffset;
	return res;
}

inline VkStridedDeviceAddressRegionKHR makeStridedDeviceAddressRegionKHR (VkDeviceAddress deviceAddress, VkDeviceSize stride, VkDeviceSize size)
{
	VkStridedDeviceAddressRegionKHR res;
	res.deviceAddress	= deviceAddress;
	res.stride			= stride;
	res.size			= size;
	return res;
}

inline VkTraceRaysIndirectCommandKHR makeTraceRaysIndirectCommandKHR (uint32_t width, uint32_t height, uint32_t depth)
{
	VkTraceRaysIndirectCommandKHR res;
	res.width	= width;
	res.height	= height;
	res.depth	= depth;
	return res;
}

inline StdVideoEncodeH264RefListModEntry makeStdVideoEncodeH264RefListModEntry (StdVideoH264ModificationOfPicNumsIdc modification_of_pic_nums_idc, deUint16 abs_diff_pic_num_minus1, deUint16 long_term_pic_num)
{
	StdVideoEncodeH264RefListModEntry res;
	res.modification_of_pic_nums_idc	= modification_of_pic_nums_idc;
	res.abs_diff_pic_num_minus1			= abs_diff_pic_num_minus1;
	res.long_term_pic_num				= long_term_pic_num;
	return res;
}

inline StdVideoEncodeH264RefPicMarkingEntry makeStdVideoEncodeH264RefPicMarkingEntry (StdVideoH264MemMgmtControlOp operation, deUint16 difference_of_pic_nums_minus1, deUint16 long_term_pic_num, deUint16 long_term_frame_idx, deUint16 max_long_term_frame_idx_plus1)
{
	StdVideoEncodeH264RefPicMarkingEntry res;
	res.operation						= operation;
	res.difference_of_pic_nums_minus1	= difference_of_pic_nums_minus1;
	res.long_term_pic_num				= long_term_pic_num;
	res.long_term_frame_idx				= long_term_frame_idx;
	res.max_long_term_frame_idx_plus1	= max_long_term_frame_idx_plus1;
	return res;
}

inline StdVideoDecodeH264Mvc makeStdVideoDecodeH264Mvc (uint32_t viewId0, uint32_t mvcElementCount, StdVideoDecodeH264MvcElement* pMvcElements)
{
	StdVideoDecodeH264Mvc res;
	res.viewId0			= viewId0;
	res.mvcElementCount	= mvcElementCount;
	res.pMvcElements	= pMvcElements;
	return res;
}
