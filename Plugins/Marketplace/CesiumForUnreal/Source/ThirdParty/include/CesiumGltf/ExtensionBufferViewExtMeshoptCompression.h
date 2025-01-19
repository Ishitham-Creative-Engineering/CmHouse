// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include <CesiumGltf/Library.h>
#include <CesiumUtility/ExtensibleObject.h>

#include <cstdint>
#include <string>

namespace CesiumGltf {
/**
 * @brief Compressed data for bufferView.
 */
struct CESIUMGLTF_API ExtensionBufferViewExtMeshoptCompression final
    : public CesiumUtility::ExtensibleObject {
  /**
   * @brief The original name of this type.
   */
  static constexpr const char* TypeName =
      "ExtensionBufferViewExtMeshoptCompression";
  /** @brief The official name of the extension. This should be the same as its
   * key in the `extensions` object. */
  static constexpr const char* ExtensionName = "EXT_meshopt_compression";

  /**
   * @brief Known values for The compression mode.
   */
  struct Mode {
    /** @brief `ATTRIBUTES` */
    inline static const std::string ATTRIBUTES = "ATTRIBUTES";

    /** @brief `TRIANGLES` */
    inline static const std::string TRIANGLES = "TRIANGLES";

    /** @brief `INDICES` */
    inline static const std::string INDICES = "INDICES";
  };

  /**
   * @brief Known values for The compression filter.
   */
  struct Filter {
    /** @brief `NONE` */
    inline static const std::string NONE = "NONE";

    /** @brief `OCTAHEDRAL` */
    inline static const std::string OCTAHEDRAL = "OCTAHEDRAL";

    /** @brief `QUATERNION` */
    inline static const std::string QUATERNION = "QUATERNION";

    /** @brief `EXPONENTIAL` */
    inline static const std::string EXPONENTIAL = "EXPONENTIAL";
  };

  /**
   * @brief The index of the buffer with compressed data.
   */
  int32_t buffer = -1;

  /**
   * @brief The offset into the buffer in bytes.
   */
  int64_t byteOffset = 0;

  /**
   * @brief The length of the compressed data in bytes.
   */
  int64_t byteLength = int64_t();

  /**
   * @brief The stride, in bytes.
   */
  int64_t byteStride = int64_t();

  /**
   * @brief The number of elements.
   */
  int64_t count = int64_t();

  /**
   * @brief The compression mode.
   *
   * Known values are defined in {@link Mode}.
   *
   */
  std::string mode = Mode::ATTRIBUTES;

  /**
   * @brief The compression filter.
   *
   * Known values are defined in {@link Filter}.
   *
   */
  std::string filter = Filter::NONE;

  /**
   * @brief Calculates the size in bytes of this object, including the contents
   * of all collections, pointers, and strings. This will NOT include the size
   * of any extensions attached to the object. Calling this method may be slow
   * as it requires traversing the object's entire structure.
   */
  int64_t getSizeBytes() const {
    int64_t accum = 0;
    accum += int64_t(sizeof(ExtensionBufferViewExtMeshoptCompression));
    accum += CesiumUtility::ExtensibleObject::getSizeBytes() -
             int64_t(sizeof(CesiumUtility::ExtensibleObject));

    return accum;
  }
};
} // namespace CesiumGltf
