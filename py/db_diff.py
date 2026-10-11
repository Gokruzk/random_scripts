from pathlib import Path

import pandas as pd


LOCAL_FILE = Path(r"C:\Users\Nigell\Downloads\local.csv")
PROD_FILE = Path(r"C:\Users\Nigell\Downloads\prod.csv")


def main():
    local = pd.read_csv(LOCAL_FILE)
    prod = pd.read_csv(PROD_FILE)

    # Usamos tabla + columna como identificador único
    local_columns = set(zip(local["table_name"], local["column_name"]))

    prod_columns = set(zip(prod["table_name"], prod["column_name"]))

    # Columnas que existen en producción pero no en local
    only_prod = prod_columns - local_columns

    # Columnas que existen en local pero no en producción
    only_local = local_columns - prod_columns

    print("=" * 60)
    print("COLUMNAS EN PRODUCCIÓN QUE NO ESTÁN EN LOCAL")
    print("=" * 60)

    for table, column in sorted(only_prod):
        print(f"{table}.{column}")

    print("\n" + "=" * 60)
    print("COLUMNAS EN LOCAL QUE NO ESTÁN EN PRODUCCIÓN")
    print("=" * 60)

    for table, column in sorted(only_local):
        print(f"{table}.{column}")

    print("\n" + "=" * 60)
    print("RESUMEN")
    print("=" * 60)

    print(f"Local:      {len(local_columns)} columnas")
    print(f"Producción: {len(prod_columns)} columnas")
    print(f"Solo PROD:  {len(only_prod)}")
    print(f"Solo LOCAL: {len(only_local)}")


if __name__ == "__main__":
    main()
