import { describe, expect, it } from "vitest";
import { greet } from "../src/main";

describe("greet", () => {
  it("returns a greeting for the given name", () => {
    expect(greet("Tauri-App-Template")).toBe("Hello, Tauri-App-Template!");
  });

  it("handles the default case", () => {
    expect(greet("world")).toBe("Hello, world!");
  });
});
