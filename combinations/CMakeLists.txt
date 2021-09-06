add_library(
    comboLib STATIC
    combination.cpp
)

target_link_libraries(comboLib gatesLib)