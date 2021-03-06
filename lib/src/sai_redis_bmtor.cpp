#include "sai_redis.h"

REDIS_GENERIC_QUAD(TABLE_BITMAP_CLASSIFICATION_ENTRY,table_bitmap_classification_entry);
REDIS_GENERIC_STATS(TABLE_BITMAP_CLASSIFICATION_ENTRY,table_bitmap_classification_entry);
REDIS_GENERIC_QUAD(TABLE_BITMAP_ROUTER_ENTRY,table_bitmap_router_entry);
REDIS_GENERIC_STATS(TABLE_BITMAP_ROUTER_ENTRY,table_bitmap_router_entry);
REDIS_GENERIC_QUAD(TABLE_META_TUNNEL_ENTRY,table_meta_tunnel_entry);
REDIS_GENERIC_STATS(TABLE_META_TUNNEL_ENTRY,table_meta_tunnel_entry);

const sai_bmtor_api_t redis_bmtor_api = {

    REDIS_GENERIC_QUAD_API(table_bitmap_classification_entry)
    REDIS_GENERIC_STATS_API(table_bitmap_classification_entry)
    REDIS_GENERIC_QUAD_API(table_bitmap_router_entry)
    REDIS_GENERIC_STATS_API(table_bitmap_router_entry)
    REDIS_GENERIC_QUAD_API(table_meta_tunnel_entry)
    REDIS_GENERIC_STATS_API(table_meta_tunnel_entry)
};
