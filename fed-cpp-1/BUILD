load("@rules_cc//cc:defs.bzl", "cc_library")

cc_binary(
    name = "main",
    srcs = glob([
        "src/*.cpp",
        "src/*.hpp",
    ]),
    deps = [
        "//api-cpp-std:main",
        "//impl-cpp-null:main",
    ],
)
