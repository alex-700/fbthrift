/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/lib/thrift/gen-py3/patch/metadata.h"

namespace apache {
namespace thrift {
namespace op {
::apache::thrift::metadata::ThriftMetadata patch_getThriftModuleMetadata() {
  ::apache::thrift::metadata::ThriftServiceMetadataResponse response;
  ::apache::thrift::metadata::ThriftMetadata& metadata = *response.metadata_ref();
  ::apache::thrift::detail::md::StructMetadata<GeneratePatch>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<GenerateOptionalPatch>::gen(metadata);
  return metadata;
}
} // namespace apache
} // namespace thrift
} // namespace op
