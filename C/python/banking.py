from tkinter import *
import sqlite3

def submit():
    try:
        name = entry_name.get()
        address = entry_address.get()
        email = entry_email.get()
        amount = entry_amount.get()

        with sqlite3.connect('bank.db') as db:
            cursor = db.cursor()
            cursor.execute(f"INSERT INTO users (name, address, email, amount) VALUES ('{name}', '{address}', '{email}', '{amount}')")
            db.commit()
            db.close()
        message.set('Customer added successfully')
    except Exception as e:
        message.set(str(e))


def view():
    try:
        with sqlite3.connect('bank.db') as db:
            cursor = db.cursor()
            cursor.execute('SELECT * FROM users')
            data = cursor.fetchall()
            if data:
                table.delete(*table.get_children())
                for row in data:
                    table.insert('', 'end', values=row)
    except Exception as e:
        message.set(str(e))


window = Tk()
window.title('Banking System')

frame_top = Frame(window)
frame_top.pack(side=TOP)

label_name = Label(frame_top, text='Name')
label_name.grid(row=0, column=0)
entry_name = Entry(frame_top)
entry_name.grid(row=0, column=1)

label_address = Label(frame_top, text='Address')
label_address.grid(row=1, column=0)
entry_address = Entry(frame_top)
entry_address.grid(row=1, column=1)

label_email = Label(frame_top, text='Email')
label_email.grid(row=2, column=0)
entry_email = Entry(frame_top)
entry_email.grid(row=2, column=1)

label_amount = Label(frame_top, text='Amount')
label_amount.grid(row=3, column=0)