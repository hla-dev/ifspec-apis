load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "main",
    srcs = glob([
        "src/*.cpp",
        "src/*.hpp",
    ]),
    visibility = ["//visibility:public"],
    deps = ["//api-cpp-std:main"],
)
