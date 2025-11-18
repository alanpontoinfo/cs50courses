from cs50 import SQL

db =SQL("sqlite:///favorites.db")

favorite = input("Favorite: ")

#rows = db.execute("Select * From favorites Where problem = 'Mario'")
rows = db.execute("Select count(*) as n From favorites Where problem = ?", favorite)
#for row in rows:
#row=rows[0]
print(rows[0]["n"])
   # print(row["Timestamp"])
