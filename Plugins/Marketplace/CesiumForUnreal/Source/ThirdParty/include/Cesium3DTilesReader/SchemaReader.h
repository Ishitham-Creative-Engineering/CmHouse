// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include <Cesium3DTiles/Schema.h>
#include <Cesium3DTilesReader/Library.h>
#include <CesiumJsonReader/JsonReader.h>
#include <CesiumJsonReader/JsonReaderOptions.h>

#include <rapidjson/fwd.h>

#include <span>
#include <vector>

namespace Cesium3DTiles {
struct Schema;
} // namespace Cesium3DTiles

namespace Cesium3DTilesReader {

/**
 * @brief Reads \ref Cesium3DTiles::Schema "Schema" instances from JSON.
 */
class CESIUM3DTILESREADER_API SchemaReader {
public:
  /**
   * @brief Constructs a new instance.
   */
  SchemaReader();

  /**
   * @brief Gets the options controlling how the JSON is read.
   */
  CesiumJsonReader::JsonReaderOptions& getOptions();

  /**
   * @brief Gets the options controlling how the JSON is read.
   */
  const CesiumJsonReader::JsonReaderOptions& getOptions() const;

  /**
   * @brief Reads an instance of Schema from a byte buffer.
   *
   * @param data The buffer from which to read the instance.
   * @return The result of reading the instance.
   */
  CesiumJsonReader::ReadJsonResult<Cesium3DTiles::Schema>
  readFromJson(const std::span<const std::byte>& data) const;

  /**
   * @brief Reads an instance of Schema from a rapidJson::Value.
   *
   * @param value The value from which to read the instance.
   * @return The result of reading the instance.
   */
  CesiumJsonReader::ReadJsonResult<Cesium3DTiles::Schema>
  readFromJson(const rapidjson::Value& value) const;

  /**
   * @brief Reads an array of instances of Schema from a rapidJson::Value.
   *
   * @param value The value from which to read the array of instances.
   * @return The result of reading the array of instances.
   */
  CesiumJsonReader::ReadJsonResult<std::vector<Cesium3DTiles::Schema>>
  readArrayFromJson(const rapidjson::Value& value) const;

private:
  CesiumJsonReader::JsonReaderOptions _options;
};

} // namespace Cesium3DTilesReader
