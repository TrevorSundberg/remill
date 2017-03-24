/* Copyright 2016 Peter Goodman (peter@trailofbits.com), all rights reserved. */

namespace {

template <typename... Args>
DEF_SEM(PREFETCH, Args...) {
  return memory;
}

}  // namespace

DEF_ISEL(CLWB_MEMmprefetch) = PREFETCH<>;
DEF_ISEL(PREFETCH_RESERVED_0F0Dr4) = PREFETCH<M8>;
DEF_ISEL(PREFETCH_RESERVED_0F0Dr5) = PREFETCH<M8>;
DEF_ISEL(PREFETCH_RESERVED_0F0Dr6) = PREFETCH<M8>;
DEF_ISEL(PREFETCH_RESERVED_0F0Dr7) = PREFETCH<M8>;
DEF_ISEL(PREFETCHT2_MEMmprefetch) = PREFETCH<M8>;
DEF_ISEL(PREFETCHT1_MEMmprefetch) = PREFETCH<M8>;
DEF_ISEL(PREFETCHT0_MEMmprefetch) = PREFETCH<M8>;
DEF_ISEL(CLFLUSHOPT_MEMmprefetch) = PREFETCH<M8>;
DEF_ISEL(PREFETCH_EXCLUSIVE_MEMmprefetch) = PREFETCH<M8>;
IF_AVX512(DEF_ISEL(PREFETCHWT1_MEMu8) = PREFETCH<M8>;)
DEF_ISEL(PREFETCHW_0F0Dr1) = PREFETCH<M8>;
DEF_ISEL(PREFETCHW_0F0Dr3) = PREFETCH<M8>;
DEF_ISEL(PREFETCHNTA_MEMmprefetch) = PREFETCH<M8>;