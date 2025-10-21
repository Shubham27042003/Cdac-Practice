package org.wordfrequency;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.PrintWriter;
import java.io.IOException;
import java.util.Scanner;

public class Entry {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		System.out.println("Enter Source file path:");
		String sourcePath = scanner.nextLine();

		System.out.println("Enter Source file name:");
		String sourceName = scanner.nextLine();

		System.out.println("Enter Output file path:");
		String outPath = scanner.nextLine();

		System.out.println("Enter Output file name:");
		String outName = scanner.nextLine();

		File objSource = new File(sourcePath, sourceName);
		File objOut = new File(outPath, outName);

		String[] words = new String[5];
		int[] counts = new int[5];
		int wordCount = 0;

		try (BufferedReader reader = new BufferedReader(new FileReader(objSource))) {
			String line;
			while ((line = reader.readLine()) != null) {
				String[] parts = line.split("\\s+");
				for (String part : parts) {
					String word = part.toLowerCase().replaceAll("[^a-z]", "");
					if (word.isEmpty()) continue;

					int index = findWordIndex(words, word, wordCount);
					if (index != -1) {
						counts[index]++;
					} else {
						if (wordCount == words.length) {
							words = growArray(words);
							counts = growArray(counts);
						}
						words[wordCount] = word;
						counts[wordCount] = 1;
						wordCount++;
					}
				}
			}


			sortAlphabetically(words, counts, wordCount);

			try (PrintWriter writer = new PrintWriter(objOut)) {
				writer.println("Words in alphabetical Order");
				for (int i = 0; i < wordCount; i++) {
					writer.println(words[i] + " : " + counts[i]);
				}

				sortByFrequency(words, counts, wordCount);

				writer.println("\nWords sorted by frequencys");
				for (int i = 0; i < wordCount; i++) {
					writer.println(words[i] + " : " + counts[i]);
				}
			}


		} catch (IOException e) {
			System.out.println(e.getMessage());
		}
	}

	private static int findWordIndex(String[] arr, String word, int count) {
		for (int i = 0; i < count; i++) {
			if (arr[i].equals(word))
				return i;
		}
		return -1;
	}

	private static String[] growArray(String[] oldArray) {
		String[] newArray = new String[oldArray.length + 5];
		System.arraycopy(oldArray, 0, newArray, 0, oldArray.length);
		return newArray;
	}

	private static int[] growArray(int[] oldArray) {
		int[] newArray = new int[oldArray.length + 5];
		System.arraycopy(oldArray, 0, newArray, 0, oldArray.length);
		return newArray;
	}

	private static void sortAlphabetically(String[] words, int[] counts, int size) {
		for (int i = 0; i < size - 1; i++) {
			for (int j = 0; j < size - i - 1; j++) {
				if (words[j].compareTo(words[j + 1]) > 0) {
					swap(words, counts, j, j + 1);
				}
			}
		}
	}

	private static void sortByFrequency(String[] words, int[] counts, int size) {
		for (int i = 0; i < size - 1; i++) {
			for (int j = 0; j < size - i - 1; j++) {
				if (counts[j] < counts[j + 1]) {
					swap(words, counts, j, j + 1);
				}
			}
		}
	}

	private static void swap(String[] words, int[] counts, int i, int j) {
		String tempWord = words[i];
		words[i] = words[j];
		words[j] = tempWord;

		int tempCount = counts[i];
		counts[i] = counts[j];
		counts[j] = tempCount;
	}
}
