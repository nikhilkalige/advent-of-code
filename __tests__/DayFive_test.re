open Jest;
open Expect;

let exampleDataOne = "dabAcCaCBAcCcaDA";

test("handles example input puzzle #1", () =>
  expect(Alchemical.polymerUnits(exampleDataOne)) |> toEqual(10)
);

test("solves puzzle #1", () =>
  expect(Alchemical.polymerUnits(DayFiveData.data)) |> toEqual(11298)
);