/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/core/v3/extension.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg.h"
#include "envoy/config/core/v3/extension.upb.h"
#include "envoy/config/core/v3/config_source.upb.h"
#include "google/protobuf/any.upb.h"
#include "udpa/annotations/status.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout *const envoy_config_core_v3_TypedExtensionConfig_submsgs[1] = {
  &google_protobuf_Any_msginit,
};

static const upb_msglayout_field envoy_config_core_v3_TypedExtensionConfig__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(8, 16), 0, 0, 11, 1},
};

const upb_msglayout envoy_config_core_v3_TypedExtensionConfig_msginit = {
  &envoy_config_core_v3_TypedExtensionConfig_submsgs[0],
  &envoy_config_core_v3_TypedExtensionConfig__fields[0],
  UPB_SIZE(16, 32), 2, false,
};

static const upb_msglayout *const envoy_config_core_v3_ExtensionConfigSource_submsgs[2] = {
  &envoy_config_core_v3_ConfigSource_msginit,
  &google_protobuf_Any_msginit,
};

static const upb_msglayout_field envoy_config_core_v3_ExtensionConfigSource__fields[4] = {
  {1, UPB_SIZE(4, 8), 0, 0, 11, 1},
  {2, UPB_SIZE(8, 16), 0, 1, 11, 1},
  {3, UPB_SIZE(0, 0), 0, 0, 8, 1},
  {4, UPB_SIZE(12, 24), 0, 0, 9, 3},
};

const upb_msglayout envoy_config_core_v3_ExtensionConfigSource_msginit = {
  &envoy_config_core_v3_ExtensionConfigSource_submsgs[0],
  &envoy_config_core_v3_ExtensionConfigSource__fields[0],
  UPB_SIZE(16, 32), 4, false,
};

#include "upb/port_undef.inc"

