// Copyright (c) YugaByte, Inc.

#ifndef YB_MASTER_YQL_AGGREGATES_VTABLE_H
#define YB_MASTER_YQL_AGGREGATES_VTABLE_H

#include "yb/master/yql_empty_vtable.h"

namespace yb {
namespace master {

// VTable implementation of system_schema.aggregates.
class YQLAggregatesVTable : public YQLEmptyVTable {
 public:
  explicit YQLAggregatesVTable(const Master* const master);
 protected:
  Schema CreateSchema() const;
};

}  // namespace master
}  // namespace yb
#endif // YB_MASTER_YQL_AGGREGATES_VTABLE_H
